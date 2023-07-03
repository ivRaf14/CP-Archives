#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n, bil;
	bool isPrime = true;
	
	cin >> n;
	while(n--){
		cin >> bil;
		
	 if (bil == 0 || bil == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= bil / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime){
	
        cout << "YA" << endl;
    }
    else{
	
        cout << "BUKAN" << endl;	
	}
	isPrime = true;
		
		
	}
	

		
	
}
