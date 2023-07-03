#include<bits/stdc++.h>

using namespace std;

int main(){

	int n; cin >> n;
	
	int ans=0;
	
	while(n--){
		string str;
		cin >> str;
		int full = str.size();
		int mid = str.size() / 2;
		
		for(int i=0; i < mid;i++){
			ans+= abs(str[full-i-1] - str[i]);
			
		}
		cout << ans << endl;
		ans = 0;
		
		
	}







}
