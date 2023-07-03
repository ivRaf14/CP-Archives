#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int main(){ 
	int N; cin >> N;
	
	for(int i=1; i <=N; i++){
		string s = "";
		
		if(i % 3 == 0) s+="Comp";
		if(i % 5 == 0) s+="Fest";
		if(i % 7 == 0) s+="Seven";
		
		if(s == "") s+=to_string(i);
		
		if(i < N)cout << s <<" ";
		else cout << s;
	}
	

  
} 
       
