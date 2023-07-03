#include <bits/stdc++.h>

using namespace std;

	int N;
	int arr[600000];
	
	int M;
	int h_imp[600000];
	
int main(){

			
	int msk;
	while(cin >> msk){
		if(msk == arr[N-1]){
			continue;
		}
		arr[N++] = msk;
	}
	
	for(int i=0; i < N; i++){
		bool imp = false;
		
		if(i == 0 || i == N-1){
			imp = true;
		}
		if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
			imp = true;
		}
		if(arr[i] < arr[i-1] && arr[i] < arr[i+1]){
			imp = true;
		}
		if(imp){
			h_imp[M++] = arr[i];
		}
	}
	int res = 0;
	for(int i=1 ; i< M; i++){
		int tot = abs(h_imp[i]- h_imp[i-1]);
		res = max(res, tot);
	}
	cout << res << endl;
		
}
