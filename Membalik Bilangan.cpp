#include <iostream>

using namespace std;

int main(){
	
	int a, b, reversed = 0, nums;
	cin >>a;

		for(int i=0; i <a; i++){
			cin >> b;
			
			while( b != 0){
			nums = b % 10;
			reversed = reversed *10 + nums;
			b /= 10;		
			}
			cout << reversed << endl;
			reversed = 0;
		}
		
		
		
		
		
		
		
					
		}
		
		
	
	
	
		
		
	
	

