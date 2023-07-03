#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n, tengah= 0; cin >> n;
	char huruf, angka; cin >> huruf >> angka;
	
	bool ganjil = false;
	
	if(n % 2 == 1){
		ganjil = true;
		tengah = (n / 2);
	}

	
	for(int i = 0; i < n; i++){
		for(int j = 0; j  < n; j++){
			
			if(ganjil){
				
				if( i == 0 || i == n-1 || j == 0 || j == n-1){
				cout << angka;
				}
				else if(i == tengah && j == tengah){
					cout << "*";
				}
				
				else{
					cout << huruf;
				}
				
			}
			else{
					if( i == 0 || i == n-1 || j == 0 || j == n-1){
				cout << angka;
			}
			
			else{
				cout << huruf;
			}
				
				
				
			}
			
			
		
		}
		cout << endl;
	}
	


	
}
