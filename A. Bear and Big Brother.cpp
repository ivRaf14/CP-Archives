#include <bits/stdc++.h>
using namespace std;



int main()
{
 	int n, a ,b, cnt=0;
 	cin >> n;
 	while(n--){
 		cin >> a >> b;
 		if( a < b-1){
 			cnt++;
		 }
	 }
	 cout << cnt;
}

