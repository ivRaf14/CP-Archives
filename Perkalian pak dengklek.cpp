#include<bits/stdc++.h>

using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	
	int jumlah = 0;
	for(int i=0; i < a.size(); i++){
		
		for(int j=0; j < b.size(); j++){
			
			char a1 = a[i];
			int af = a1 - '0';
			
			char b1 = b[j];
			int bf = b1 - '0';
			
			int res= af * bf;
			jumlah += res;
		}
	}
	cout << jumlah << endl;
	
}
	

