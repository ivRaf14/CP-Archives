#include <bits/stdc++.h>
using namespace std;



int main()
{
	int a, b;
	cin >> a >> b;
	
	int minim = min(a,b);
	int total = max((a- min(a, b))/2, (b- min(a,b)) / 2);
	
	cout << minim <<" " <<total << endl;
}
