#include <bits/stdc++.h>
using namespace std;



int main()
{
	string a;
	int n, total=0;
	cin >> n;
	
	while(n--){
		cin >> a;
		
		if(a == "X++" || a == "++X"){
			total +=1;
		}
		else{
			total-=1;
		}
	}
		cout << total;
		
	
}

