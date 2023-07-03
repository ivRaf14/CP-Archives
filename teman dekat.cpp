#include <bits/stdc++.h>

#define ll long long 
#define N 80000
using namespace std;






int main(){
	
	int max = INT_MIN; int min = INT_MAX;
	
	int n, d; cin >> n >> d;
	int x[N], y[N];
	
	for(int i=0; i< n; i++){
		cin >> x[i] >> y[i];
	}
	
	for(int i=0; i < n; i++){
		for(int j=i +1; j < n; j++){
			int res = pow(abs(x[j] - x[i]), d ) + pow(abs(y[j] - y[i]), d);
			if( res > max){
				max = res;
			}
			if(res < min){
				min = res;
			}
		}
		//cout << min << " ";
	}
	cout << min << " " << max << endl;

	
	
	
}
