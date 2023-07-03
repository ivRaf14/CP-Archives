#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	ll arr_x[n];
	
	for(int i=0; i <n; i++){
		cin >> arr_x[i];		
	}
	vector<long long> vec(arr_x, arr_x +n);
	
	int q; cin >> q;
	
	vector<long long >::iterator it1 , it2;
	ll res_n = 0;
	while(q--){
		ll x, y; cin >> x >> y;
			
			 it1 = upper_bound(vec.begin(), vec.end(), x);
			 it2 = upper_bound(vec.begin(), vec.end(), y);
			res_n = it2 - it1 ;
			cout << it1 << " " << it2 << endl;
			cout << res_n << endl;
		
		}
		
	}
	
	
	
	
	
	
	
		





