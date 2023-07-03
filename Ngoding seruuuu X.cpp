#include <bits/stdc++.h>

using namespace std;

bool count(string s){
	int dgt=0, low=0;
	
	for(int i=0; i <s.size();i++){
		if(isdigit(s[i])){
			dgt++;
		}
		if(islower(s[i])){
			low++;
		}
		if(dgt >=1 && low >= 3){
			return true;
		}
	}
	return false;
}


int main() 
{ 
	string str; cin >> str;
	
	string word = "";
	
	bool ans = false;
	
	
	for(int i=0; i < str.size(); i++){
		char ch = str[i];
		
		if(ch !=' '){
			word += str[i];
		}
		else{
			if(count(word)){
				break;
				
			}
			else{
				word = "";
			}
		}
	}
	
	
	if(count(word)){
		cout << word << endl;
		cout << word.size() << endl;
	}
	else{
		cout << "NO" << endl;
	}


		  
} 




