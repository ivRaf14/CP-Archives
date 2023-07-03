#include <bits/stdc++.h>
using namespace std;



int main()
{
	string str;
	cin >> str;
	string str1 = "ideafuse";
	
	size_t found = str.find(str1); 
    if (found != string::npos) 
        cout << found + 1 << endl;

	else {
		cout << -1 << endl;
	}
	
}
