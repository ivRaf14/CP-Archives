#include <bits/stdc++.h>

using namespace std;

   
// Driver code 

long long findXOR(long long n) 
{ 
    long long mod = n % 4; 
  
    // If n is a multiple of 4 
    if (mod == 0) 
        return n; 
  
    // If n % 4 gives remainder 1 
    else if (mod == 1) 
        return 1; 
  
    // If n % 4 gives remainder 2 
    else if (mod == 2) 
        return n + 1; 
  
    // If n % 4 gives remainder 3 
    else if (mod == 3) 
        return 0; 
} 
  
// Function to return the XOR of elements 
// from the range [l, r] 
 long long findXOR(long long l, long long r) 
{ 
    return (findXOR(l - 1) ^ findXOR(r)); 
} 
  
// Driver code 
int main() 
{ 
    int n; cin >> n;
    while(n--){
    	long long a, b;
    	cin >> a >> b;
    	cout << findXOR(a, b) << endl; 
	}
  
    
  
    return 0; 
} 
