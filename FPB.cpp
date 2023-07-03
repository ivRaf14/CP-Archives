#include <bits/stdc++.h>
using namespace std;



int main()
{
	int a, b;
	cin >> a >> b;
	
	int pembagi = __gcd(a, b);
		
	a= a / pembagi;
	b = b/ pembagi;
	
	if(pembagi == 1){
		cout << "Tidak" << endl;
	}
	else{
		cout << a << " " << b << endl;
	}
	

	
}
