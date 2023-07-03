#include <bits/stdc++.h>

#define ll long long 

using namespace std;




int main(){
	int n; cin >> n;
	vector<int> arr;
	int cnt = 0;
	
	for(int i=1; i <=n; i++){
		int a; cin >> a;
		arr.push_back(a);
	}
	int grup; cin >> grup;
	
	sort(arr.begin(), arr.end());
	
	for(auto it : arr){
		cout << it << " ";
	}
	
	for(int i=1; i <=n; i++){
		if(i == 3 ){
			cout <<  <<arr[i] << endl;
			cout << arr[i+1] -1 << " " << endl;
			cnt++;
		} 
		if(cnt == grup-1) break; 
		 
	}
	
		

    

	
	
	
	
}
