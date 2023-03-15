/*
   This is a fibonaccia sequence by reccursion.

   by Bruce Geng
*/

#include <iostream>
using namespace std; 


// Reccusion, easy to make but run slowly
int fib(int n){

	return (2 > n)? n: fib(n - 1) + fib(n - 2);
}

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