n#include <bits/stdc++.h>

#define ll long long 

using namespace std;

bool check(string ipt){
	int cc =0, dgt = 0;
	
	for(int i=0; i < ipt.size();i ++){
		if(islower(ipt[i])) cc++;
		else if(isdigit(ipt[i])) dgt++;
	}
	
	if( cc >= 3 && dgt >= 1){
		return true;
	}
	else{
		return false;
	}
	
}


int main(){ 
	string word;
	string tot;
	while(cin >> word){
		word.erase(remove(word.begin(), word.end(), '.'), word.end());
		if(check(word)){
			if(word.size() > tot.size()){
				tot = word;
			}
		}
	}
	if(tot == ""){
		cout << "NO" << endl;
	}
	else{
		cout << tot << endl;
		cout << tot.size() << endl;
	}         
	


  
 
}
