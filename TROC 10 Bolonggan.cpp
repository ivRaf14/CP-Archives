#include <bits/stdc++.h>

using namespace std;



int main(){
	ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
  	int n; cin >> n;
  	
  	if(n ==0){
  		cout << 1 << endl;
	  }
	else if(n == 1){
		cout << 0 << endl;
	}  
	else if(n % 2 == 1){
		cout << 4;
		for(int i=0; i < n/2; i++){
			cout << 8 ;
		}
		cout << endl;
	}
	else{
		for(int i=0; i < n/2; i++){
			cout << 8 ;
		}
		cout << endl;
	}
}




