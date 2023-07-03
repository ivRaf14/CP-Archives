#include <bits/stdc++.h>

using namespace std;

void draw(int n){
	if(n >=2){
		draw(n-1); 
		for(int i=1; i <=n; i++){
			cout << "*" ;
		}
		cout << endl;
		draw(n-1);
	}
	else{
		cout << "*" << endl;
	}
	
	
	
}


int main(){
	int n;
	cin >> n;
	
	draw(n);
}
