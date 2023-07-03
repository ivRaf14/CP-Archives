#include <bits/stdc++.h>

#define ll long long 

using namespace std;


	
int main(){ 

	 
    
	string ipt;
	int l, r;  cin >> l >> r;
	
	while(l<=r){
		int mid = (l+r)/ 2;
		cout << mid << endl;
		
		
		
		 getline(cin >> ws, ipt);
		
		if(ipt == "terlalu kecil") l = mid + 1;
		else if(ipt == "terlalu besar") r = mid -1;
		else if(ipt == "selamat") break;
	}
	

	return 0;
	


  
 
}
