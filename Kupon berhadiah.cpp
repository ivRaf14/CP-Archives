#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; ll a; cin >> n >> a;
	
	ll arr[n];
	
	for(int i=0; i < n; i++){
		cin >> arr[i];
	}
	
	ll min = abs(a - arr[0]);
	ll index = arr[0];
	
	for(int i=1; i <n; i++){
		if(min > abs(a - arr[i])){
			min = abs(a - arr[i]);
			index = arr[i];
		}
		if(min == abs(a - arr[i])){
			if(arr[i] <= a) index = arr[i];
		}
	}
	cout << index << endl;
	
	
	
}




