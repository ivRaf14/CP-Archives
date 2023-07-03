#include <bits/stdc++.h>

using namespace std;


int main(){
	long long int a, n, total = 0;
	cin >> a;
	 
	if(a < 0){
		n = abs(a * 2);
	}
	else{
		n = abs(a * 2) -1;
	}
	for(int i = 1 ;i <= n; i++){
		total += i;
	}
	cout << total << endl;
}

