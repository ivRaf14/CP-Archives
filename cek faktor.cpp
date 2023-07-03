#include <bits/stdc++.h>

#define ll long long 

using namespace std;

void checkFac(ll a){
	
	vector<ll>v;
	
	for(int i=1; i*i <=a; i++){
		if(a % i == 0){
			v.push_back(i);
			v.push_back(a/i);
		}
		if(v.size() > 4) break;
	}
	
	if(v.size() <= 4){
		cout << "YA" << endl;
	}
	else{
		cout << "BUKAN" << endl;
	}
}


	
int main(){ 

	int n; cin >> n;
	
	while(n--){
		ll ipt; cin >> ipt;
		checkFac(ipt);
	}
	return 0;
	


  
 
}
