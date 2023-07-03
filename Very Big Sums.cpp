#include <iostream>
#include <string>

using namespace std;

int main(){
	long long int a, b, c, d ,e ,f;
	
	cin >> a >> b >> c >> d;
	
	e = a * d + b * c;
	f =  b * d;
	
	if(e % b == 0 && f % b == 0 ){
		e = e /b;
		f = f/b;
	}
	if(e % d == 0 && f % d == 0 ){
		e = e /d;
		f = f/d;}
	
	cout << e << " " << f << endl;
	
	 
	

	

	
	
}
