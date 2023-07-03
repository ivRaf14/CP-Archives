#include <bits/stdc++.h>

#define ll long long 

using namespace std;

int n, m;
char blok[30][30];


vector<int>v(15);

void print(){
	for(int i=0; i <n; i++){
		for(int j=0; j <m; j++){
			cout << blok[i][j] ;
		}
		cout << endl;
	}
	
}




void ganti(){
	
	for(int i= v.back()-1; i >=0; i--){
		for(int j=0; j <m; j++){
			if(blok[i][j] == '1'){
			int start = i;
			int end = i;
			
			
			for(int k = i+1; k<= n; k++){
				if(blok[k][j] == '0'){
					end= k; 
				} 
				else {
					swap(blok[start][j], blok[end][j]);
					break;
				}
				//cout << end << endl;
				
			}	
			
			}
		}
	}
	
	
}
void del(int i){
		for(int j=0; j < m; j++){
			blok[i][j] = '0';
		}
	
}

bool check(){
	for(int i= 0; i <n; i++){
		int zzz = 0;
		for(int j=0; j <m; j++){
			if(blok[i][j] == '1') zzz++;
			
			if(zzz == m){
				return true;
				break;
				
			}
		}
	}
	
	return false;
}

void solve(){
	
	
	for(int i= 0; i <n; i++){
		int asd = 0;
		for(int j=0; j <m; j++){
			if(blok[i][j] == '1') asd++;
			
			if(asd == m){
				v.push_back(i);
				del(i);
				
			}
		}
	}
	ganti();
	
	
}


int main(){
	
	 cin >> n >> m;
	
	
	for(int i=0; i <n; i++){
		for(int j =0; j <m; j++){
			cin >> blok[i][j];
		
		}
	}
	
	solve();
	
	while(check() == true){
		//cout  << "dadada" << endl;
		solve();
	}
	
	if(!check()) print();
	
}
