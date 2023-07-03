#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	
	int arr[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500,1000};
	
	for(int i=10; i--;){
		if(n >= arr[i]){
			cout << arr[i]  <<" "<< n / arr[i] << endl;
			n = n % arr[i];
		}
		if(n==0){
			break;
		}
	}
	
}
	
	
	
	
	
	
	
		





