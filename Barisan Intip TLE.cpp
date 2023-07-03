#include <bits/stdc++.h>

#define ll long long 
#define N 100010
using namespace std;

ll v[N];
	
int main(){ 

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
	
	ll total = 1;
	
	int n; cin >> n;
	
	for(int i=0; i < n; i++){
		cin >> v[i];
		
		
		if(i > 0){
			
			for(int j=i; j >=0; j--){
				if(v[i] >= v[j]){
				total+= 1;
				}
				else{
					
					break;
					
				}
			}		
		}
		//cout << "dadadad "<< total << endl;
	
	}
	cout << total << endl;
	

	
	


  
 
}
