#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int main(){
	ll n; cin >> n;
	vector<pair<ll, ll>>v;
	
	for(ll i=0; i < n; i++){
		ll a; cin >> a;
		v.push_back(make_pair(a, i));
	}
	
	stack<pair<ll,ll>>s;
	s.push(make_pair(v[0].first, v[0].second));
	
	ll total = 1;
	
	for(ll i=1; i <n; i++){
		
		while(!s.empty() && s.top().first <=  v[i].first){
			s.pop();
		}
		if(s.empty()) total += i+1;
		else {
			  
			  total += v[i].second - s.top().second;
		}
		s.push(make_pair(v[i].first, v[i].second));
		//cout << "    " << total <<endl;
	}
	cout << total << endl;
		

    

	
	
	
	
}
