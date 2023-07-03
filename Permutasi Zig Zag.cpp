#include <bits/stdc++.h>

#define ll long long 

using namespace std;

bool cek(int n, int arr[]){
	if(n < 3) return true;
	
	for(int i=2; i <n; i++){
		if(arr[i-1] < arr[i] && arr[i] < arr[i+1]) return false;
		if(arr[i-1] > arr[i] && arr[i] > arr[i+1]) return false;
		
	}
	return true;
}

void permute(int n,int k, int arr[], bool pernah[]){
	if(k >n){
	
	if(cek(n, arr)){
		for(int i=1; i <=n; i++){
			cout << arr[i];
		}
		cout << endl;
	}
}
	
	for(int i=1; i <= n; i++){
		if(!pernah[i]){
			pernah[i] = true;
			arr[k] = i;
			permute(n, k+1, arr, pernah);
			pernah[i] = false;
		}
	}
	
}


	
int main(){
	int n; cin >> n;
	int arr[n+1];
	bool pernah[n+1];
	memset(pernah, false, sizeof(pernah));
	
	permute(n,1, arr, pernah);	
	
	
}
	
	
	
	
	
	
	
		





