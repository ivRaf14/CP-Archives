#include <bits/stdc++.h>

using namespace std;



int main() 
{ 
	string s; cin >> s;
	int n; cin >> n;
	
	cout << "Anak ayam turunlah "<<n << endl;
	
	for(int i=n-1;i > 0; i--){
		cout << "Mati satu tinggallah " << i << endl;
		cout << "Anak ayam turunlah " << i << endl;
	}
	cout << "Mati satu tinggallah induknya" << endl;
	
	
	  
} 


