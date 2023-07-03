#include <iostream>

using namespace std;

int main(){
	int n, k, i=0;
	cin >> n >> k;
	
	while(i < k){
		if(n % 10 !=0){
			n -= 1;
			i++;
		}
		else{
			n /= 10;
			i++;
		}
	}
	cout << n;
	
	
	
	
}
