#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n, k; cin >> n >> k;
	ll arr[n],res=0;
	
	for(int i=0; i <n; i++){
		cin >> arr[i];
	
	}
	for (int i=0; i<k; i++) {
       res += arr[i]; 
   }

	ll real = res;
	
	for(int i=k; i <n; i++){
		
		real+=arr[i] - arr[i-k];
		res = max(res, real);
		

	}	
	cout << res << endl;
	
}
	
	
	
	
	
	
	
		





