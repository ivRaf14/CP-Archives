#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	
	int cnt=0;
	int index;
	
	for(int i=1; i < 8; i++){
		if(str[0] != str[i]){
			cnt++;
			index = i;
		}
	}
	if(cnt >1){
		cout << 1 << endl;
		}
	else if(cnt == 1){
		cout << index+1 << endl;
			
		}
	
	
}
