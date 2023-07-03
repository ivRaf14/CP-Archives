#include <bits/stdc++.h>

#define ll long long 
#define N 80000
using namespace std;

vector<int> res(N);

void sieve(){
	bool isprime[N];
	memset(isprime, true, sizeof(isprime));
	

	
	for(int i = 2; i * i <= N; i++){
		if(isprime[i] == true){
			for(int j = i * i; i <= N; j+=i){
				isprime[i] = false;
			}
		}
	}
	
	for(int i=2; i <= N; i++){
		if(isprime[i]){
			res.push_back(i);
		}
	}
}


int main(){
	
	int n; cin >> n;
	
	
	
	while(n--){
		int a; cin >> a;
		cout << res[a] << endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}