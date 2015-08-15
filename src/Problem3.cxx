#include <iostream>
using namespace std;


bool isPrime(unsigned long n);

int main() { 
	for(unsigned i=13195; i>0; i--){
		if(isPrime(i) == true){
			cout << i << endl;
		}
	}
	
	return 0;
}

bool isPrime(unsigned long n) {
	int count = 0;
	
	for(unsigned long i=1; i<=n; i++){
		if(n%i==0){
			count++;
		}
	}
	
	if(count == 2){
		return true;
	}
	else{
		return false;
	}
		
}