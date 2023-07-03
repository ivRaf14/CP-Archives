#include <bits/stdc++.h>

#define ll long long 

using namespace std;


ll dp[100000];

void catalan(int n){
	dp[0] = dp[1] = 1;
	
	for(int i=2; i<=n; i++){
		dp[i] = 0;
		for(int j=0; j <i; j++){
			dp[i] += dp[j] * dp[i-j-1];
		}
	}
	//for(int i=0; i <n; i++) cout << dp[i] << " ";
	
	cout << dp[n/2] << endl;
}



int main(){
	int n; cin >> n;
	
	catalan(n);

	
	
}
