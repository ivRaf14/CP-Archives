#include <bits/stdc++.h>

using namespace std;

int main(){
	int n ,jumlah; cin >> n >> jumlah;
	int arr[n];
	
	for(int i=0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	int cnt=0;
	//6, 11, 11, 13, 16, 18
	int total = 0;
	
	for(int i= n-1; i >=0; i--){
		if(arr[i] <= jumlah){
			total += arr[i];
			cnt++;
		}
		if(total >= jumlah){
			break;
		}
	}

	cout << cnt << endl;
	
	
	
}
