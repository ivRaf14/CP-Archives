#include <bits/stdc++.h>


typedef long long LL;

using namespace std;

int main(){
	string str;
	cin >> str;
	int length = str.size();
	
	int cnt = 1;
	
	for(int i=0 ;i < length; i++){
		if(isupper(str[i])){
			cnt+=1;
		}
		
	}
	cout << cnt;
}
