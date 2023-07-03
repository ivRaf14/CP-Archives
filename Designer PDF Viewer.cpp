#include <bits/stdc++.h>

using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int arr[26];
	for(int i=0; i < 26; i++){
		cin >> arr[i];
	}
	string s;cin >> s;
	
	int res = 1;
	for(int i=0; i < s.size();i++){
		res = max(res, arr[s[i] - 97]);
	}
	cout << res * s.size() << endl;
	
	
}

