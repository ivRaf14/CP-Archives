#include <iostream>     // std::cout, std::fixed
#include <iomanip>
using namespace std;

int main(){
	long long int a, b;
	cin >> a >> b;
	
	a= ((((a % 100000) % 10000)% 1000)%100)%10 ;
	b = ((((b % 100000) % 10000)% 1000)%100)%10;
	
	cout << a+b; 
	
	
	
	
	
	
}
