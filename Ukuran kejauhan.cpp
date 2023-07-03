#include <bits/stdc++.h>

using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n ; cin >> n;
	int ipt;
	
	while(n--){
		cin >> ipt;
		ipt = floor(sqrt(ipt));
		cout << ipt << "^2 = " << ipt * ipt << endl;
	}
	
}




