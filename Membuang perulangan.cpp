#include <bits/stdc++.h>

using namespace std;



int main() 
{ 
	int n; cin >> n;
	int ipt[n];
	
	map<int, bool> mp; 
	
	for(int i=0; i < n; i++){
		cin >> ipt[i];
	}
	
	
	for (int i = 0; i < n; ++i) { 
  
        // Print the element if it is not 
        // there in the hash map 
        if (mp.find(ipt[i]) == mp.end()) { 
            cout << ipt[i] << endl; 
        } 
  
        // Insert the element in the hash map 
        mp[ipt[i]] = true; 
    } 
	
	
	  
} 


