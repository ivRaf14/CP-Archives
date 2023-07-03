#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
	string s;
	string t = "_";
	cin >> s;
	
	int len = s.length();
	

		for(int i=0; i < len; i++){
			if(s.find(t)){
			s.erase(s.find(t),t.length());
			break;
		}
		}
		
	
	cout << s;
	
	
	
}
