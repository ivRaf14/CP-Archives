#include <bits/stdc++.h>

#define ll long long 

using namespace std;




int main(){ 
	unsigned long int a, b; cin >> a >>b;
	unsigned long int n = b-a;
	string bit = "";
	ll tot = 0;
	
	while(n >0){
		if(n % 2 == 0) bit='0' + bit;
		else bit='1' + bit;
		n/=2;
	}
	//cout << bit << endl;
	for(unsigned long int i=0; i<bit.size();i++){
		if(bit[i] == '1'){
			unsigned long int ans = pow(2, bit.size()-i-1); 
			cout << ans << endl;
		}
	}
	
	


  
 
}
