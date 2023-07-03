#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main(){
	int n , count = 0, biges= 1;
	cin >> n;
	
	int arr[n];
	
	for(int i=0; i < n; i++){
		cin >> arr[i];
		if( arr[i] > biges){
			biges = arr[i];
		}
		
	}
	for(int i = 0; i < n; i ++){
		if(arr[i] == biges){
			count++;
		}
		
	}
	cout << count ;
	
}
