#include<bits/stdc++.h>

using namespace std;


int nthPrime(int n){
	int cnt = 0;
    bool prime;
    
    for(int i=2; i > 0; i++){
		prime = true;
		
		for(int j=2; j < i; j++){
			if(i % j == 0){
				prime = false;
				break;
			}
		}
		if(prime == true){
			cnt++;	
		}
		if(cnt == n){
			return i;
			break;
		}
    }
    return 0;
}


int main(){
	int n; cin >> n;
	int a;
	
	while(n--){
		cin >> a;
		cout << nthPrime(a) << endl;
	}
	return 0;

}
