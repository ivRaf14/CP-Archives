#include <bits/stdc++.h>

#define ll long long 

using namespace std;

ll int calcuXOR(int n){
	switch(n % 4){
		case 0: return n;
		case 1: return 1;
		case 2: return n+1;
		case 3: return 0;
	}
	
	
}

int main(){ 
	ll int a, b; cin >> a >> b;
	//cout << (calcuXOR(a-1) ^ calcuXOR(b)) << endl;
	string binary = bitset<70>(calcuXOR(a-1) ^ calcuXOR(b)).to_string();
	
	binary.erase(0, binary.find_first_not_of('0')); //"10000000"
	cout << binary;


  
} 
       
