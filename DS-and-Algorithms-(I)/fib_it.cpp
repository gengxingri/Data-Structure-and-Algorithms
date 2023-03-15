/*
   This is a fibonaccia sequence by iteration which run faster than reccursion

   by Bruce Geng
*/

#include <iostream>
using namespace std; 


// fibonacci function using dynamic programming
int fib(int n){
   int f = 0, g = 1;
   while (0 < n--){
   	g = g + f;
   	f = g - f;
   }
   return g;
}

// print fibinacci sequences
void print_fib(int n){
	for (int i = 0; i < n; i++){
		cout << "fib(" << i <<") = " << fib(i) << endl;
	}
}


int main(){
	int n = 10;
	print_fib(n);
	return 0;
}
