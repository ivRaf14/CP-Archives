#include <bits/stdc++.h>
using namespace std;



int main()
{
 	int q, l, r, d; cin >> q;
 	
 	while(q--){
 		cin >> l >> r >> d;
 		
 		if(d < l || d > r){
 			cout << d << endl;
		 }
		 else{
		 	cout << (r / d) * d + d << endl;
		 }
	 }
}

