#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
	int size = 100000;
	char word[size]; cin >> word;
	char temp = toupper(word[0]);
	

		if(word[0]== temp){
			cout << word;
		}
		else{
			word[0] = toupper(word[0]);
			cout << word;
		}
	
	
	
	






}

