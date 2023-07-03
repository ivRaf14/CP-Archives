#include <bits/stdc++.h>
using namespace std;


int main()
{
	string str;
	cin >> str;
	
	bool isup= false, isdown = false, isnum = false, isspec = false, islength= false;
	int cnt = 0;
	for(int i = 0; i < str.size(); i++){
		if(isalpha(str[i])) cnt++;
		if(islower(str[i])) isdown = true;
		if(str.size() >= 8) islength = true;
		if(isupper(str[i]))isup = true;
		if(isdigit(str[i])) isnum = true;
		if(!isalpha(str[i]) && !isdigit(str[i])) isspec=true;  	
		}
		
	
	if(islength && isup && isdown && isnum && isspec){
		cout << "Kuat" << endl;
	}
	else if(islength && cnt > 12){
		cout << "AgakKuat" << endl;
	}
	else{
		cout << "Lemah" << endl;
	}

	
}
