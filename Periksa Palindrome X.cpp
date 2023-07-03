#include <bits/stdc++.h>

using namespace std;

bool checkPalin(string str){
	
	int n = str.size();
	for(int i=0; i < n; i++,n--){
		if(str[i] != str[n-1]){
			return false;
		}	
	}
	return true;
}

int print(string str){
	str = str + " ";
	string word="";
	
	int cnt = 0;
	
	for(int i=0; i < str.size(); i++){
		char ch = str[i];
		
		if(ch != ' '){
			word+= ch;
		}
		else{
			if(checkPalin(word)){
				cnt++;
					
			}
			else{
				word = "";
			}
		
		}
	
	}
	return cnt;
}



int main() 
{ 
	string ipt;
	cin >> ipt;
	
	cout << print(ipt);
		  
} 


