#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n, a, b, c;
	cin >> n >> a >> b >> c ;
	 
	a+=c;
	int cntd =0, super = 0;
	int musuh;
	for(int i=0;i < n; i++){
		cin >> musuh;
		
		
		if(musuh <= a){
			cntd++;
			a+=c;	
		}
		if(musuh > a){
			a+=b;
			super++;
			if(musuh <= a){
				cntd++;
				a-=b;
				a+=c;
			}
			else{
				a-=b;
			}
		}
		cout << "fsff " << a << endl;
	}
	cout << cntd << " " << super << endl;
	
	

	
	
	

}
