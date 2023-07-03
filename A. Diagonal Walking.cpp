#include <bits/stdc++.h>
using namespace std;



int main()
{
 	int n, cnt=0;
 	string s;
 	string tot = "RU";
 	
 	cin >> n;
 	cin >> s;
 	for(int i = 0; i < n; i++){
 		if((s[i] == 'R' && s[i+1] == 'U') ||(s[i] == 'U' && s[i+1] == 'R') ){
 			cnt++;
 			i++;
		 }
	 }
	 cout << n- cnt;
}

