#include <bits/stdc++.h>

#define ll long long 

using namespace std;




int main(){
	string ipt; cin >> ipt;
	
	int n, tebak;
	cin >> n >> tebak;
	
	int l = 1;
	int r = n;
	//int mid = i + r / 2;
	
	for(int i=1; i <= tebak; i++){
		int as; cin >> as;
		
		if((as-l) >= (r - as)){
			cout << "TERLALU BESAR" << endl;
			r = as-1;
		}
		else if((as - l) < (r- as)){
			cout << "TERLALU KECIL" << endl;
			l = as+1; 
		}		
	}
	
	
	
	
}
