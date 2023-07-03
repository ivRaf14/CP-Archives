#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	long long int x[n];
	long long int y[n];
	long long int res=0;
	
	for(int i=0; i < n; i++){
		cin >> x[i];
	}
	for(int i=0; i < n; i++){
		cin >> y[i];
	}
	sort(x,x+n);
	sort(y, y+n);
	
	for(int i=0, j=n-1; i < n; i++,j--){
		res += x[i] * y[j];
	}
	cout << res << endl;
	
	// -5, 1, 3
	// -2, 1, 4
	
	//-6, 1, 
}
