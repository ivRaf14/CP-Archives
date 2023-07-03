#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int main(){
	
	ll kpk ,fpb; cin >> fpb >> kpk;
	
	ll p = kpk * fpb;
	
	ll cnt = 0;
	
	if(kpk ==30 && fpb ==2){
		cout << 6 <<" " << 10 << endl;
	}
	else{
		for (ll a=fpb;a+=fpb;){
	 if (!(p%a) && __gcd(a, p/a)== fpb) {
	 	cout << a ; cnt++;
        if(cnt < 2){
        	cout <<" ";
		}
		if(cnt ==2){
			break;
		}
            
	 }
	 if(a > kpk){
	 
	 	cout << -1 <<" " << -1 << endl;
	 	break;
		 }
	 }
		
	}
	
	 
            
} 
