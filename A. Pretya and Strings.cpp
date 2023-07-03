#include <bits/stdc++.h>
using namespace std;



int main()
{
	string a, b;
	cin >> a >> b;
	for(int i = 0; i < b.size(); i++){
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
		
	}
	if(a == b){
		cout << 0 << endl;
	}
	else for(int j = 0; j < b.size(); j++){
		if (b[j] != a[j]){
			if(a[j] < b[j]){
				cout << -1 << endl;
				break;
			}
			else{
				cout << 1 << endl;
				break;
			}
		}
		
		
	}
		
	
}

