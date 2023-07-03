#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, k;
	cin >> n >> k;
	int a, max = 0;
	
	while(n--){
		cin >> a;
		
		if(a > max){
			max = a;
		}
	}
	int total = max - k;
	if(total <= 0){
		cout << 0 << endl;
	}
	else{
		cout << total << endl;
	}
	







}
