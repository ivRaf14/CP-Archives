#include <bits/stdc++.h>

using namespace std;

  
// Driver Function 
int main() 
{ 
  int N, M; cin >> N >> M;
  map<string,string>map;
  
  string nama, nomor, cari;
  for(int i=0; i < N; i++){
  	cin >> nama >> nomor;
  	map[nama] = nomor;
  }
  for(int i=0; i < M ; i++){
  	cin >> cari;
  	if(map.find(cari) != map.end()){
  		cout << map.find(cari) -> second << endl;
	  }
  }
  
} 
