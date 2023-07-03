#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n; cin >> n;
	string s ; cin >> s;
	string total = "";
	char pem = '_';
	
	for(int i = 0; i < n; i++){
		
		if(s[i] != pem){
			total.push_back(s[i]);
			pem = s[i];
		}
	}
	cout << total << endl;

	
}
