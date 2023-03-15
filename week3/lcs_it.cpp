/*
   Largest Common Subsequence by iteration

   by Bruce Geng
*/

#include <iostream>
using namespace std; 

template <class T> 
inline T swap2(T &d, T &s)  
{
   T temp = d;
   d = s;
   s = temp;
}

//iteration
unsigned int lcs(char const * A, int n, char const * B, int m)
{
   if (n < m) { swap2(A, B); swap2(n, m); } //make sure m <= n
   
   //the current two rows
   unsigned int* lcs1 = new unsigned int[m+1];  

   unsigned int* lcs2 = new unsigned int[m+1]; 

   //buffered alternatively 
   memset(lcs1, 0x00, sizeof(unsigned int) * (m+1));
   memset(lcs2, 0x00, sizeof(unsigned int) * (m+1));

   for (int i = 0; i < n; swap2(lcs1, lcs2), i++)

      for (int j = 0; j < m; j++)

         lcs2[j+1] = (A[i] == B[j]) ? 1 + lcs1[j] : max(lcs2[j], lcs1[j+1]);

   unsigned int solu = lcs1[m]; 
   delete[] lcs1; 
   delete[] lcs2; 
   return solu;
}


int main()
{
	char const * A = "advantage";
	char const * B = "didactical";

	cout << lcs(A, 9, B, 10) << endl;

	return 0;
}