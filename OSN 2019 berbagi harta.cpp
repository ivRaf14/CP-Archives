#include <bits/stdc++.h>

#define ll long long 

using namespace std;




int main(){ 
	int n,p,q; cin >> n >> p >> q;
	
	int arra[200005];
	bool b[200005],c[200005];
	for(int i=1; i <=n; i++){
		cin >> arra[i];
	}
	for(int i=1; i <=p; i++){
		int temp;
		cin >> temp;
		b[temp] = 1;
	}
	for(int i=1; i<=q; i++){
		int temp;
		cin >> temp;
		c[temp] = 1;
	}
	
	vector<int>tot;
	ll sum = 0;
	
	
	
	for(int i=1; i <=n; i++){
		if(b[i] && c[i]) tot.push_back(arra[i]);
		else if(b[i]) sum+=arra[i];
	}
	sort(tot.begin(),tot.end(),greater<int>());


	for(int i = 0; i < tot.size(); i++) {
		if((i % 2) == 0) {
			sum += tot[i];
		}
	}

	cout << sum << endl;
	
	


  
 
}
