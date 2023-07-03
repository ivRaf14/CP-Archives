#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	string total;
	
	if(s1.find(s2)){
		s1.erase(s1.find(s2),s2.length());
	}
	if(s1.find(s3)){
		s1.erase(s1.find(s3),s3.length());
	}
	total = s3 + s4;
	s1.insert(2, total);
	
	cout << s1 << endl;
	
	
	
	
	
	
	
	
	
}
