#include <iostream> 
using namespace std; 

long long int pangkat(int x, int y){
	if(y==0){
		return 1;
	}
	else{
		return x * pangkat(x,y-1);
	}
}



  
/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(int x, unsigned int y, int p)  
{  
    int res = 1;     // Initialize result  
  
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
  
// Driver code  
int main()  
{  
    cout << pangkat(2,3);
  
}  
