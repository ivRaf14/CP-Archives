#include <bits/stdc++.h>

using namespace std;



int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k; cin >> n >> k;
	int arr[n];
	
	int res = 0;
	for(int i=0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i=0; i <k; i++){
		res += arr[i];
	}

	int res_final = res;
	for(int i=k; i <n; i++){
		res_final += arr[i] - arr[i-k];
		res = min(res, res_final);
	}
	cout << res << endl;
	
	
}




