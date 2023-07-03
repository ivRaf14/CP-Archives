#include <bits/stdc++.h>

using namespace std;



int main(){
	ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    string s; cin >> s;
    int b=0,o=0,n=0,cnt=0;
    
    for(int i=0; i <s.size(); i++){
    	if(s[i] == 'b'){
    		b++;
		}
		if(s[i]=='o'){
			o++;
		}
		if(s[i] == 'n'){
			n++;
		}
		
	}
	cnt = min(b, min(o ,n));
	if(cnt)
	cout << cnt-1 << endl;
	else{
		cout << 0 << endl;
	}
}




