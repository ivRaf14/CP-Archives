#include <bits/stdc++.h>

using namespace std;

int emas(int n){
	if(n < 12){
		return n;
	}
	else{
		return emas(n/2) + emas(n/3) + emas(n/4);
	}
	
	
}

  
// Driver Function 
int main() 
{ 
	int n; cin >> n;
	cout << emas(n) << endl;
	  
} 


