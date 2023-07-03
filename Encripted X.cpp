#include <bits/stdc++.h>
using namespace std;



int main()
{
	string str;
	cin >> str;
	int n;
	cin >> n;

	
	for(int i = 0; i < str.size(); i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] += n;
			if(str[i] > 'z'){
				str[i] -= 26;
			}
		}
		else if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] + n;
		}
	}
	for(int i = 0; i < str.size(); i++){
		cout << str[i];
	}
	cout << endl;
}
