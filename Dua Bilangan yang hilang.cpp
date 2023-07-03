#include <bits/stdc++.h>

using namespace std;



int main() 
{ 
	int n ;cin >> n;
	
	vector<bool>check(n, false);
	int arr[n];
	
	for(int i=0; i < n-2; i++){
		cin >> arr[i];
		check[arr[i]] = true;
	}
	for(int i=1; i <=n; i++){
		if(!check[i]){
			cout << i << endl;
		}
	}
	
	
	  
} 


