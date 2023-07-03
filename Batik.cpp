#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
	int size, angka;
	char huruf;
	
	cin >> size >> huruf >> angka;
	
	for(int i = 0; i < size; i++){
		
		for(int j = 0; j < size; j++){
			
			if(j == i || j == size- i -1){
				cout << angka;
			}
			else{
				cout << huruf;
			}
			
		}
		cout << endl;
	}
		
		
	
	
	

	
	
	
	
	
	
	
}
