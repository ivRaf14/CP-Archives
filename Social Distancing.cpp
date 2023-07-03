#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n; cin >> n;
	
	int first, then, jarak; 
	while(n--){
		cin >> first >> then >> jarak;
		int total=0;
		if(jarak <= 2000){
			total = first;
		}
		else{
			total +=first;
			jarak -= 2000;
			total += then * (jarak / 100);
		}
		cout << total << endl;
	}
	
	
	
	
	
	
}
