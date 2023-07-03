#include <bits/stdc++.h>

#define ll long long 

using namespace std;

string compute(string besar, string kecil){
	

	if(kecil.size() > besar.size()){
		swap(kecil, besar);
	}
	string res = "";
	
	reverse(besar.begin(),besar.end());
	reverse(kecil.begin(), kecil.end());
	
	int sisa = 0;
	for(int i=0; i<kecil.size(); i++){
		int has = (besar[i] - '0') + (kecil[i] - '0') + sisa;
		
		sisa = has /10;
		has = has % 10;
		
		res.push_back(has + '0');
		
		//cout << "onio" << sisa << endl;
	}
	
	for(int j = kecil.size(); j < besar.size(); j++){
		int ked = (besar[j] - '0' )+ sisa;
		
		sisa = ked /10;
		ked = ked % 10;
		
		res.push_back(ked+'0');
	}
	
	if(sisa > 0)res.push_back(sisa +'0');

	
	reverse(res.begin(), res.end());
	return res;
}







int main(){
	string besar, kecil;
	cin >> besar >> kecil;
	
	compute(besar, kecil);

	
	
}
