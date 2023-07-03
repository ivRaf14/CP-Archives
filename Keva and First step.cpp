#include <bits/stdc++.h>

using namespace std;

int main() 
{ 
	int n; cin >> n;
	
	int arr[n], cnt = 1,o;
	
	for(int i=0; i < n; i++){
		cin >> arr[i];
	}
	for(int i=1; i <n; i++){
		if(arr[i] >= arr[i-1]){
			cnt++;
		}
		else{
			cnt=1; o = max(o,cnt);
		}
		o = max(o,cnt);
	
	}
	cout << o << endl;
		  
} 




