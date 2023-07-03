#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
	char s[1000];
	cin >> s;
	int length = strlen(s);
	
	
	for(int i= 0; i < length; i++){
		if(s[i] == tolower(s[i])){
			s[i]=toupper(s[i]);
		}
		else if (s[i] == toupper(s[i])){
			s[i]=tolower(s[i]);
		}
		
	
		
		
		
	}
		
		cout << s << endl;
	
	
	
	
	
	
}
