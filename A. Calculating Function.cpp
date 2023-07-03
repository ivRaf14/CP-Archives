#include <iostream>

using namespace std;

int main(){
	long long int c, hasil= 0;
	
	cin >> c;
	
	/*for(int i= 1; i <= c; i++){
		if(i % 2 == 1){
			hasil -= i;
		}
		else if(i % 2==0){
			hasil +=i;
		}
		
	}
	cout << hasil;*/
	
	if(c%2 == 0){
		hasil = c/2;
	}
	if(c% 2 == 1){
		hasil = -(c+1)/2;
	}
	
	cout << hasil;
	
	
	
}
