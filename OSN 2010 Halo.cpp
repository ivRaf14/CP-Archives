#include <bits/stdc++.h>

#define ll long long 

using namespace std;

	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string hd = "halo dunia";
	string s; getline(cin,s);
	
	int cnt = 0;
	
	for(int i=0; i <hd.size(); i++){
	
		if(tolower(s[i])== hd[i]){
			cnt++;
		}
	}
	cout << cnt << endl;
	
	
	
}
	
	
	
	
	
	
	
		





