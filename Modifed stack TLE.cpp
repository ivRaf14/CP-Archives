#include <bits/stdc++.h>

#define ll long long 

using namespace std;


	
int main(){ 

	//ios_base::sync_with_stdio(false); 
    //cin.tie(NULL); 
    
	int n; cin >> n;
	vector<int>v;
	int val =0;
	int cnt = 0;
	
	while(n--){
		string a; cin >> a;
		
		
		
		if(a == "add"){
			int ipt, rpt; cin >> ipt >> rpt;
			
			while(rpt--) v.push_back(ipt);
			cout << v.size() << endl;
			val = 0;
		}
		else if(a == "del"){
			int as; cin >> as;
			
			cout << v.back() + val << endl;
			while(as--) v.pop_back();
			
		}
		else if(a == "adx"){
			int ap ; cin >> ap;
			val+=ap;
			
		}
		else if(a == "dex"){
			int a; cin >> a;
			val-=a;
			
		}
	}
	
	

	
	


  
 
}
