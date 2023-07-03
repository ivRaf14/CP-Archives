#include <bits/stdc++.h>

#define ll long long 

using namespace std;

	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	ll res = 0;
	
	int arra[n];
	int arrb[n];
	
	for(int i=0; i <n; i++){
		cin >> arra[i];
		res+= arra[i];
	}
	for(int i=0; i <n; i++){
		cin >> arrb[i];
		res+= arrb[i];
	}
	cout << n * res << endl;
	
	
	
}
	
	
	
	
	
	
	
		





