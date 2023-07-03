#include <bits/stdc++.h>

#define ll long long 

using namespace std;


	
int main(){ 

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
	int n; cin >> n;
	deque<int>q;
	int rev = 0;
	
	while(n--){
		string a; cin >> a;
		
		if(a == "add"){
			int ad, rp;
			cin >> ad >> rp;
			
			if(rev % 2 ==0){
				while(rp--) q.push_back(ad);		
			}
			else{
				while(rp--) q.push_front(ad);
			}
		
			cout << q.size() << endl;	
		}
		else if(a == "rev"){
			rev++;
			
		}
		else if(a == "del"){
			int idx; cin >> idx;
		
			
			if( rev % 2 ==0){
				cout << q.front() << endl;
				while(idx--)q.pop_front();
			}
			else{
				cout << q.back() << endl;
				while(idx--)q.pop_back();
			}
		}
		
	}
	
	

	
	


  
 
}
