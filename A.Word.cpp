#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
	string s;
	cin >> s;
	int leng = s.size();
	int lcnt=0, ucnt=0;
	
	for(int i = 0; i < leng; i++){
		if(s[i]== tolower(s[i])){
			lcnt++;
		}
		else{
			ucnt++;
		}
	}
	
	
	if(lcnt >= ucnt){
		for(int i=0; i < leng; i ++){
			s[i]= tolower(s[i]);
		}
	}
	else{
	for(int i=0; i < leng; i ++){
			s[i]= toupper(s[i]);
		}
	}	
	cout << s;
	
	
	
	
}
