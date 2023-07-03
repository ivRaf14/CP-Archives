#include <iostream>

using namespace std;

int main(){
	int a, s, b, ar=0; 
	cin >> a;
	
	for(int i = 0; i< a-1; i++){
		cin >> b;
		s += b;
	}
	for(int i =1; i <= a; i++){
		ar += i;
	}
	
	cout << ar-s;
	
	
	
}
