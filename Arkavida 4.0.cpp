#include <bits/stdc++.h>

#define ll long long 

using namespace std;

long long int solve(int arr[], int n){
	long long int res = 0, min = INT_MAX;
	for(int i=0; i <n; i++){
		res+=arr[i];
		if(arr[i] < min){
			min = arr[i];
		}
	}

	long long int div = min * n;
	
	long long int hasil = res - div;
	return hasil;
}




int main(){
	int n; cin >> n;
	
	for(int i=0; i < n; i++){
		
		int n_n; cin >> n_n;
		int arr[n_n];
		
		
		for(int i=0; i < n_n; i++){
			cin >> arr[i];
		}
		cout << solve(arr, n_n) << endl;
		
	}
	
	
	
	
}
	
	
	
	
	
	
	
		





