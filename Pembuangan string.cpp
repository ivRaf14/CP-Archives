#include <bits/stdc++.h>

#define ll long long 

using namespace std;




int main(){ 
	string a, b;
	cin >> a >> b;
	
	while(a.find(b) != string::npos){
		a.erase(a.find(b),b.size());
	}
	
	cout << a <<endl;
	
	
	


  
 
}
