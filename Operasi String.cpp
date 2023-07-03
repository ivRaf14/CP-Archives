#include <bits/stdc++.h>

#define ll long long 

using namespace std;




int main(){ 
	string a, b, c, d;
	cin >> a >>b >>c >>d;
	
	int t = a.find(b);
	a.erase(t,b.size());
	int m = a.find(c) + c.size();
	
	a.insert(m,d);
	cout << a << endl;
	
	
	
	


  
 
}
