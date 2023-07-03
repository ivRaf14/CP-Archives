#include<bits/stdc++.h>

using namespace std;

long long int power(long long int x, unsigned int y) 
{ 
    long long int temp;
	 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp % 1000000; 
    else
        return x*temp*temp % 1000000; 
} 

int numDigits(int x){
	


int main(){
	long long int x, y;
	cin >> x >> y;
	
	long long int res = power(x,y); 
	cout << res << endl;
	
	if()
}
	
}
