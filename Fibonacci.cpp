#include <iostream>

using namespace std;

int fib(int n){
		if(n==1){
			return 1;
		}
		
		else if(n % 2 == 0){
		return n/2 * fib(n-1);
	}
		else{
		return n * fib (n-1);
	}
		
		
		
	
	
		
}

int main(){
	int a;
	cin >> a;
	cout << fib(a) << endl;
		
}
