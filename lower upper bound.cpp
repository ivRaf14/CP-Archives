#include <bits/stdc++.h>

using namespace std;

   
// Driver code 
int main() 
{ 
	int n; cin >> n;
	vector<int> v;
	
	for(int i=0; i <n; i++){
		int ipt; cin>> ipt;
		v.push_back(ipt);
	}
	sort(v.begin(), v.end());
	// 4 5 10 30 30

	
	int k; cin >> k;
	while(k--){
		int a, b, res= 0; cin >> a >> b;
		
		auto it1 = lower_bound(v.begin(), v.end(), a);
		auto it2 = upper_bound(v.begin(), v.end(), b);
		res= it2 - it1 ;
		
		
		cout << res << endl;
		
	}
	
	
	
	
} 
