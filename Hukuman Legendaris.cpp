#include <bits/stdc++.h>

#define ll long long 

using namespace std;




int main(){
	int n; cin >> n;
	int cs = 1;
	int a; string ipt;
	for(int i=0; i < n; i++){
		cin >> a;
		getchar();
		getline(cin, ipt);
		
		cout << "Kasus #"<<cs++<<":" <<endl;
		for(int j =0 ;j <a; j++){
			cout << ipt << endl;
		}
	}
	
	
	
	
}
