#include <iostream>
#include <string>
using namespace std;

int func(int n){
	string a = "0";
	string b = "1";
	
	if(n == 1){
		return 1;
	}
	else if(n % 2 == 1){
		return func(n/2) + a ;
	}
	else{
		return func(n/2) + n;
	}
	
	
	
	
	
	
}

int main(){
	int n;
	cin >> n;
	cout << func(n) << endl;
	
	
}
