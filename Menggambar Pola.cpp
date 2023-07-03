#include <bits/stdc++.h>

using namespace std;




int main(){
	int baris, kolom;
	cin >> baris >> kolom;
	
	for(int i = 1; i <= baris; i++){
		for(int j = 1;j <= kolom; j++){
			if(i % 2 == 0 && j % 2 == 0){
				cout << "#";
			}
			else if(i % 2 == 1 && j % 2 == 1){
				cout << "*";
			}
			else if(i % 2 == 0 || j % 2 == 0){
				cout << "$";
			}
		}
		cout << endl;
	}
	
	
}
