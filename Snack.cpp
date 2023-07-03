#include<bits/stdc++.h>

using namespace std;

int cnt = 1;



int main(){
	int N; cin >> N;
	
	int jajan, org;
	while(N--){
		cin >> jajan >> org;
		
		if(jajan % (org + 1) == 0){
			cout << "Kasus #"<<cnt++<<": ya" << endl;
		}
		else{
			cout << "Kasus #"<<cnt++<<": tidak" << endl;	
		}
		
	
	}
	
	
}
	

