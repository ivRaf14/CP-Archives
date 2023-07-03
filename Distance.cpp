#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n; cin >> n;
	long long int man=0;
	double eu=0;
	long long int chebby= -10^5;
	long long int arr[n];
	
	for(int i=0; i < n; i++){
		 cin >> arr[i];
		 man += abs(arr[i]);
		 eu +=  arr[i] * arr[i];
		 chebby = max(chebby, arr[i]);
	}

	cout << man << endl;
	cout << fixed<< setprecision(15)<<sqrt(eu) << endl;
	cout << chebby << endl;
	
	
	
}




