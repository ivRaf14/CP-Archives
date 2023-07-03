#include<bits/stdc++.h>

using namespace std;

int main(){

	int n; cin >> n;
	string str;
	int ans=0;
	
	while(n--){
		cin >> str;
		
		for(int i=0; i < str.size(); i++){
			if(str[i] == str[i+1]){
				ans++;
			}
		}
		cout << ans << endl;
		ans = 0;
	}







}
