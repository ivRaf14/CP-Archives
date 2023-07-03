#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int main(){ 
	int N; cin >> N;
	int cas = 1;
	
	while(N--){
		int n, m;
		string ipt, wong;
		
		cin >> n >> m;
		vector<pair<int , string>> vect;
		
		for(int i=0; i <n; i++){
			cin >> ipt >> wong;
			string tot = ipt.substr(6,2) + ipt.substr(0,2) + ipt.substr(3,2);
			int iwok = stoi(tot);
			
			vect.push_back( make_pair(iwok,wong) );
		}
		
		sort(vect.begin(), vect.end());
		
	
		cout << "Case #"<<cas++<<": "<< vect[m-1].second << endl;
	}
	

  
} 
       
