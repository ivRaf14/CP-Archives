#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int arr[n][n];
	int total1=0, total2=0;
	
	for(int i=0; i < n; i ++){
		for(int j=0; j < n; j++){
			cin >> arr[i][j];
			
			if(i == j){
				total1 += arr[i][j];
			}
			if(i== n-j-1){
				total2 +=arr[i][j];
			}
		}
	}
	int diff = abs(total1- total2);
	cout << diff << endl;

	
	
	
	
}
