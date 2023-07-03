#include <bits/stdc++.h>

#define ll long long 
#define N 1000005
using namespace std;



void sieve(vector<ll>&res){
	bool isprime[N];
	memset(isprime, true, sizeof(isprime));
	

	
	for(int i = 2; i * i < N; i++){
		if(isprime[i] == true){
			
			for(int j = i * i; j < N; j+=i){
				isprime[j] = false;
			}
		}
	}
	
	for(int i=2; i < N; i++){
		if(isprime[i]){
			res.push_back(i);
		}
	}
}


int main(){
	vector<ll>res;
	int as; cin >> as;
	
	sieve(res);
	
	while(as--){
		ll a; cin >> a;
		cout << res[a-1] << endl;
	}
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
}
