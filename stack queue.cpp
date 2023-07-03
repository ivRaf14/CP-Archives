#include <bits/stdc++.h>

#define ll long long 

using namespace std;

	
int main(){ 
	
	vector<int> vec;
		
	int n; cin >> n;
	while(n--){
		string a;
		int ipt;
		cin >> a;
		
			if(a== "push_back") {
			 cin >> ipt;
			 vec.push_back(ipt);
			}
			
			else if(a =="push_front"){
			cin >> ipt;
			vec.insert(vec.begin(), ipt); 
			}
			
			else if(a == "pop_back")vec.pop_back();
			else if(a=="pop_front") vec.erase(vec.begin()); 
		
	}  
	
	for(auto it: vec){
		cout << it << endl;
	}
	
	
	
	


  
 
}
