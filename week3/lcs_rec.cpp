/*
   Largest Common Subsequence by using recurrsion

   by Bruce Geng
*/

#include <iostream>
using namespace std; 


// recurrsion
unsigned int lcs(char const * A, int n, char const * B, int m)
{
   if (n < 1 || m < 1) //trial cases
   	return 0;
   else if (A[n-1] == B[m-1]) //decrease & conquer 
   	return 1 + lcs(A, n-1, B, m-1);
   else                       //divide & conquer
      return max(lcs(A, n-1, B, m), lcs(A, n, B, m-1));
}


int main()
{
	char const * A = "advantage";
	char const * B = "didactical";

	cout << lcs(A, 9, B, 10) << endl;

	return 0;
}