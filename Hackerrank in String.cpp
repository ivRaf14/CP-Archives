#include <bits/stdc++.h>
using namespace std;

 

int main()
{
    int n, cnt;
    string s, hckr = "hackerrank";
    
    cin >> n;
    for(int i=0 ; i < n; i++){
    	cin >> s;
    	
    	cnt = 0;
    	for(int j=0; j < s.size(); j++){
    		if(s[j] == hckr[cnt]){
    			cnt++;
			}
		}
    	
    	if(cnt == 10){
    		cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}

