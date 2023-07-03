#include <bits/stdc++.h>

#define ll long long 

using namespace std;

	
int main(){ 
	int n, m; cin >> n >> m;
	int arr[105][105];
	// 3 4
	for(int i=1; i <=n; i++){
		for(int j=1; j <=m; j++){
			cin >> arr[i][j];
		}
	}
	
	//  4 3
	for(int j = 1; j <=m; j++){
		for(int i= n; i >=1; i--){
			cout << arr[i][j] << " ";
		}
		
		cout << endl;
	}

  
 
}
