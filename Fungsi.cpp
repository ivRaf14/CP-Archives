#include <bits/stdc++.h>

using namespace std;

int isFunc(int a, int b, int x, int k){
	if(k == 0){
		return x;
	}
	else{
		return abs(a * isFunc(a, b, x, k-1) + b);
	}
}


int main(){
	int a, b, k ,x;
	cin >> a >> b >> k >> x;
	
	cout << isFunc(a, b, x, k) << endl;
	
}

