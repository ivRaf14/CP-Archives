#include <bits/stdc++.h>

#define ll long long 

using namespace std;

	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, d; cin >> n >> d;
	ll arr[n],cnt=0;
	
	for(int i=0; i <n; i++){
		cin >> arr[i];
	}
	for(int i=1; i <n; i++){
		if(i == 1 || arr[i]- arr[i-1] >= d){
			cnt++;
		}
	}
	cout << cnt << endl;
	
}
	
	
	
	
	
	
	
		





