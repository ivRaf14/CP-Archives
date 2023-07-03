#include <bits/stdc++.h>

using namespace std;


int main()
{
	float a , b, c, d;
	cin >> a >> b >> c >> d;
	
	float rata = (a+b+c+d) / 4;
	
	ostringstream ss1;
	ss1.precision(2);
	ss1 <<fixed<< rata;
	
	string str = ss1.str();
	replace( str.begin(), str.end(), '.', ',');
	
	cout << "Rp "<<str << endl;;


	
}
