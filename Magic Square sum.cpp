#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n, res=0; cin >> n;
	
	while(n--){
		ll ipt; cin >> ipt;
		res = ipt * ((ipt * ipt) + 1)/2;
		cout << res << endl;
	}
	
}
	
	
	
	
	
	
	
		





