#include <bits/stdc++.h>

using namespace std;

int print(int arr[], int n){
	sort(arr, arr+n);
	
	int res = arr[n-1] + arr[n-2] +arr[n-3] +arr[n-4] +arr[n-5];
	
	return res;	
}


int main(){
	
	int n; cin >> n;
	
	
	while(n--){
		int arrN; cin >> arrN;
		int arr[arrN];
		for(int i=0; i < arrN; i++){
			cin >> arr[i];
		}
			cout << print(arr, arrN) <<endl;
	}
}
