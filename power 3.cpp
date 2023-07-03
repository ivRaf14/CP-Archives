#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n, cnt = 0; cin >> n;
	
	vector<ll> v;
	vector<ll> res;
	
	while(n > 0){
		v.push_back(n % 3);
		n /= 3;
	}
	for(int i=0; i < v.size(); i++){
		if(v[i] == 1){
			res.push_back(pow(3,i));
			cnt++;
		}
	}
	cout << cnt << endl;
	cout << res[0];
	for(int i=1; i < res.size(); i++){
		cout << " " << res[i];
	}
	cout << endl;
}
	
	
	
	
	
	
	
		





