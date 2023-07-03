#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	ll cnt = 1;
	while(n--){
		ll a, b; cin >> a >> b;
		
		
		if(a + b > 0){
			cout << "Kasus #"<<cnt++<<": Positif" << endl;
		}
		else if(a + b < 0){
			cout << "Kasus #"<<cnt++<<": Negatif" << endl;	
		}
		else{
				cout << "Kasus #"<<cnt++<<": Nol" << endl; 
		}
		
	}
		
}
	
	
	
	
	
	
	
		





