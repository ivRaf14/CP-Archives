#include<bits/stdc++.h>

using namespace std;

int main(){

	int n; cin >> n;
	string str ; cin >> str;
	int sea = 0, cnt = 0;
	
	for(int i=0; i < n; i++){
		if(str[i] == 'U'){
			sea +=1;
		}
		else{
			sea-=1;
		}
		if (str[i] == 'U' && sea == 0){
			cnt++;	
		}
		
	}
	cout << cnt << endl;






}
