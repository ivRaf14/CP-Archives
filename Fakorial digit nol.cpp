#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);cin.tie(NULL); 
	string wong, search;
	int ongko;
	int n, ipt; 
	cin >> n >> ipt;
	
	vector<int>notep;
	vector<string>nama;

	
	for(int i =0; i < n; i++){
		cin >> wong >> ongko;
		nama.push_back(wong);
		notep.push_back(ongko);
	}

	
	for(int j =0 ; j < ipt; j++){
		cin >> search;
		for(int i = 0 ;i < n; i++){
			if (nama[i] == search){
				cout << notep[i] << endl;
				break;
			}
		}
	}

}
