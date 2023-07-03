#include <bits/stdc++.h>

using namespace std;



int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k; cin >> n >> k;
	
	map<string,string> map;
	
	for(int i=0; i <n; i++){
		string a; string b; cin >> a >> b;
		map[a] = b; 
	}
	
	for(int i =0; i < k; i++){
		string cari; cin >> cari;
		
		if(map.find(cari) != map.end()){
			cout << map.find(cari) -> second << endl;
		}
		else{
			cout << "NIHIL" << endl;
		}
	}
	
	
}




