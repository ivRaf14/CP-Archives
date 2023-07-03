#include <bits/stdc++.h>

#define ll long long 

using namespace std;
string res ="";

void primeFac(ll n){
	int cnt=0;
	int cn = 0;
	
	while(n % 2 == 0){
		cnt++;
		n /=2;
		
	}
	if(cnt > 1) res+= "2^" +to_string(cnt)+" x ";
	else if(cnt == 1)res+=" 2 x "; 
	
	
	for(int i=3; i * i <= n; i+=2){
		int index = 0;
		while(n % i == 0){
			cn++;
			n/=i;
			index = i;
		}
		if(cn > 1) res+= to_string(index) +"^" +to_string(cn)+" x ";
		else if(cn == 1) res+= to_string(index) +" x ";
		cn = 0;
	}
	if(n > 2) res+= to_string(n);
	
}

	
int main(){ 
	ll a; cin >> a;
	primeFac(a);
	bool is = false;
	if(res[res.size()-2] == 'x'){
		res.erase(res.end()-2);
		
	}
	
	
	cout << res << endl;	

  
 
}
