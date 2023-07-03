#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string str){
	int first = 0;
	int end = str.size()-1;
	
	while(first < end){
	
	if(str[first] != str[end]){
		return false;
	}
	first++;
	end--;
	}
	return true;
}



int main(){
	string str;
	getline(cin,str);
	
	if(isPalindrome(str)){
		cout << "YA" << endl;
	}
	else{
		cout << "BUKAN" << endl;
	}
	
	

}
