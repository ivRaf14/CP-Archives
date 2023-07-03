#include <bits/stdc++.h>

#define ll long long 

using namespace std;



int main(){
	
	 string a, b; cin >> a >> b;
	 if(a.size() < b.size()){
	 	swap(a, b);
	 }
	 
	 
	 bool jwb = false;
	 
	 for(int i=0; i < a.size(); i++){
	 
	 string res = "";
	 	for(int j=0; j < a.size(); j++){
	 		
	 		if(i == j) continue;
	 		else res += a[j];
	 		
		 }
		 
		 if(res == b){
		 	jwb = true;
		 	break;
		 }
		 
	 }
	 
	 
	 if(jwb){
	 	cout <<"Tentu saja bisa!" << endl;
	 }
	 else cout << "Wah, tidak bisa :(" << endl;
	
}
