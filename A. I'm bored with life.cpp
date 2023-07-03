# include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,m; cin >> n,m;
	int hn, hm;
	int fpb;
	
	for(int i =1; i<= n; i++){
		hn = hn* i;
	}
	for(int i =1; i<=m ; i++){
		hm = hm* i;
	}
	
	for(int i= 1; i<=20; i++){
		if(hn % i == 0 && hm % i ==0){
			fpb = i;
		}
		cout << fpb;
	}
	







}
