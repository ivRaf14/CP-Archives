#include <bits/stdc++.h>

#define ll long long 

using namespace std;




int main(){ 
	string s; cin >> s;
	string has = "";
	int index = s.find('*'); // 2
	for(int i=0; i < s.size(); i++){
		if(s[i]!= '*') has+=s[i];
	}
	
	int m; cin >> m;
	for(int i=0; i < m; i++){
		string ipt; cin >> ipt;
		
		 if(isalpha(s[index -1]) && isalpha(s[index+1])){
			string f, e;
			string hasil = ipt;
			for(int i=0; s[i]!= '*'; i++){
				f+= s[i];
				
			}
			//cout << f << endl;
			for(int i = index + 1; i < s.size(); i++){
				e= s[i] + e;
			}
			//cout << e << endl;
			bool as1 = ipt.substr(0,f.size()) == f;
			string del = ipt.erase(0,f.size());
			
			string rev = string(del.rbegin(),del.rend());
			//cout << rev << endl;
			bool as = rev.substr(0, e.size()) == e;
			
			if(as1&&as) cout << hasil << endl;
		}
		
		else if(isalpha(s[index-1])){
			string ass = ipt.substr(0,index);
			if(ass == has) cout << ipt << endl;
		}
		
		else if(isalpha(s[index+1])){
			string ap;
			for(int i = s.size()-1; s[i] !='*'; i--){
				ap += s[i];
			}
			string asmr = string(ipt.rbegin(),ipt.rend());
			if(asmr.substr(0,ap.size()) == ap) cout << ipt << endl;
			
		}
		else cout << ipt << endl;
		
	}
	
	
	
	
	


  
 
}
