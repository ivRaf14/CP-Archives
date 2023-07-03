#include <iostream>

using namespace std;

int main(){
	
	int n, a, b;
	cin >> n;
	// n = 133
	
	a = (n/10) * 10;
	b = a+ 10;
	
	if(n - a > b- n){
		cout << b;
	}
	else{
		cout << a;
		
	}
	
	
	
	
	
	
	
	
}
