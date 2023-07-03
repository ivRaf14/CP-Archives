#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long n; cin >> n;
	vector<long long> vec;
	
	for(int i=1; i <= sqrt(n); i++){
		if(n % i == 0){
			if(n /i == i){
				vec.push_back(i);
			}
			else{
				vec.push_back(i);
				vec.push_back(n/i);
			}
		}
	}
	sort(vec.begin(), vec.end());
	
	for(auto x : vec){
		cout << x << endl;
	}
	
	
	
}




