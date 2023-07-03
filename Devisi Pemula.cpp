#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
	int size, angka;
	char huruf;
	
	cin >> size >> huruf >> angka;
	
	for(int j = 0; j < 1; j++){
		cout << angka;
		
		for(int k = 0; k < size-2; k++){
			cout << huruf;
		}
		cout << angka;
		cout << endl;
	}
	
	for(int i = 1 ; i < size-1; i++){
		cout << huruf;
		
		for(int q = 1; q < size- 1; q++){
			cout << angka;
		}
		cout << huruf;
		cout << endl;
	}
	
	for(int j = 0; j < 1; j++){
		cout << angka;
		
		for(int k = 1; k < size-1; k++){
			cout << huruf;
		}
		cout << angka;
		cout << endl;
	}
	
	
	

	
	
	
	
	
	
	
}
