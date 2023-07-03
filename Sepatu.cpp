#include <bits/stdc++.h>

using namespace std;

int main(){
	//11 10 12 10 13
	//11 9 10 11 13
	
	// 11 11 13 10
	
	int n, m; cin >> n >> m;
	long long int bbk[n];
	long long int spt[m];
	int cnt = 0;
	
	for(int i=0; i < n; i++){
		cin >> bbk[i];
	}
		
	for(int i= 0; i < m; i++){
		cin >> spt[i];
	}
	for(int i=0; i < n; i++){
		for(int j=0; j < m; j++){
			if(bbk[i] == spt[j] || bbk[i] + 1 == spt[j]){
				cnt++;
				
			}
		}
	}
	cout << cnt << endl;
		

}
