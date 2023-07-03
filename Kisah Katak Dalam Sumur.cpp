#include <bits/stdc++.h>

using namespace std;



int main(){
	int N; cin >> N;
	
	while(N--){
	
	int n, jarak; cin >> n >> jarak;
	int lompat[n];
	

	for(int i=0; i < n; i++){
		cin >> lompat[i];
	}
	
	sort(lompat,lompat+n);
	
	for(int i=0; i < n; i++){
		if(lompat[n-1] + lompat[i] >=jarak){
			cout << lompat[n-1] + lompat[i] << endl;
			break;
		}
	}
}
	
}


