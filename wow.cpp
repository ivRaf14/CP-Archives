#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	long long int i;
	cin >> a >> b;
	b = b -a ;
	
	while(b > 0){
		i=1;
		while((i * 2) <= b){
			i*= 2;		
		}
		b -= i;
		cout << i << endl;
	}
	
	
	
}
