#include<bits/stdc++.h>

using namespace std;

int main(){

	int n; cin >> n;
	int a, b, c;
	
	while(n--){
		cin >> a >> b >> c;
		int catA = abs(c - a);
		int catB = abs(c - b);
		
		if( catA == catB){
			cout << "Mouse C" << endl;
		}
		else if(catA < catB){
			cout << "Cat A" << endl;
		}
		else{
			cout << "Cat B" << endl;
		}
		
	}
	







}
