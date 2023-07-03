#include <bits/stdc++.h>

using namespace std;



int main(){
	ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
	string s; cin >> s;
	int x = 0, y = 0;
	
	for(int i=0; i <s.size(); i++){
		if(s[i] == 'R'){
			x +=1;
		}
		if(s[i] == 'L'){
			x +=-1;
		}
		if(s[i] == 'U'){
			y +=1;
		}
		if(s[i] == 'D'){
			y +=-1;
		}	
	}
	cout << x << " " << y << endl;
	
	
	
	
}




