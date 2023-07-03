#include<bits/stdc++.h>

using namespace std;

int FPB(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return FPB(b, a % b);
	}	
}
int KPK(int arr[], int n){
	int ans = arr[0];
	
	for(int i=1; i < n;i++){
		ans = (((arr[i] * ans)) / 
                (FPB(arr[i], ans)));
	}
	return ans;
}

int main(){
	int n; cin >> n;
	int arr[n];
	
	for(int i=0; i < n; i++){
		cin >> arr[i];
	}
	cout << KPK(arr,n) << endl;
	
	
	
	

}
