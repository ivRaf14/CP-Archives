#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int dp[100000];

void coin(int arr[], int n, int sisa){
	
	for(int i=0; i <= sisa; i++){
		dp[i] = 1000;
	}
	
	
	dp[0] = 0;
	
	for(int i=0; i <n; i++){
		for(int  j =0; j <= sisa; j++){
			if(j >= arr[i])  dp[j] = min(dp[j], 1 + dp[j -arr[i]]);	
		}
	}
	
	cout << dp[sisa] << endl;	
	
}


int main(){
	int n; cin >> n;
	int arr[605] ;
	
	for(int i=0; i < n; i++){
		cin >> arr[i];
	}
	
	int sisa; cin >> sisa;
	
	coin(arr, n, sisa);
	
	
	
	
}
