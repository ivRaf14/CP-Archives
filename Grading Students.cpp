#include <bits/stdc++.h>

using namespace std;


int main(){
	int n, a;
	cin >> n;
	
	vector<int>vec;
	
	while(n--){
		cin >> a;
		
		if(a % 5 > 2 && !(a< 38)){
			cout <<(a + (5 -a % 5)) << endl;
		}
		else{
			cout << a << endl;
		}
	}
	
	
}

