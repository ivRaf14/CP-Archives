#include <bits/stdc++.h>

using namespace std;


int main() 
{ 
	int n; cin >> n;
	int arr[15][15];
	
	int cnt = 1;
	int index=0;
	
	int cnt2 = 2;
	int index2 = 1;
	
	for(int i=0; i < n; i++){
		for(int j=0; j <n; j++){
			if((i == 0 && j < n)){
			index+=cnt;
			arr[i][j] = index;
			cnt++;
			}
			else if( i > 0 && j == 0){
			index2+=cnt2;
			arr[i][j] = index2;
			cnt2++;
			}
		
			else{
				arr[i][j] = arr[i][j-1] + arr[i-1][j];
			}
		}
	}
	
	for(int i=0; i < n; i++){
		for(int j=0; j <n; j++){
			cout << arr[i][j] <<" ";
		}
	cout << endl;
	}
	
	

  
} 


