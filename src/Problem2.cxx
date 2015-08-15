#include <iostream>
using namespace std;

int fib(int n);

int main() {
	
	int sum = 0;
	for(int n=0; fib(n) < 4000000; n++){
	
			
		if(fib(n)%2 == 0){
			sum += fib(n);
		}
	}
	
	cout << sum << endl;
	return 0;
}

int fib(int n) 
{
	int temp;
	if(n==1 || n==0){
		temp = 1;
	}
	else {
		temp = fib(n-2)+fib(n-1);
	}
	return temp;
}