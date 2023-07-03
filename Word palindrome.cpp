#include <bits/stdc++.h>

using namespace std;


bool Palin(string str){
	int n = str.size();
	
	for(int i=0; i < n; i++){
		if(str[i] != str[n-1-i]){
			return false;
		}
	}
	return true;
}
	

int main(){
	
	vector <string> res;
	string s; getline(cin,s);
	
	s = s + " ";
	
	string word = "";
	
	
	for(int i=0; i < s.size(); i++){
		if(s[i] != ' '){
			word+=s[i];
		}
		else{
			if(Palin(word)){
				res.push_back(word);
			}
			word = "";
		}
	}
	cout << res[0];
	for(int i=1; i < res.size(); i++){
    	cout << " " << res[i];
	}
	cout << endl;
}




