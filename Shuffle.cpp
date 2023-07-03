#include <bits/stdc++.h>

using namespace std;

  
// Driver Function 
int main() 
{ 
   int M, N; cin >> M >> N;
   string ipt;
   int index = 0, diff;
   
	map<string,bool>map;
  	
  	string arr[N];
  	
  	for(int i=0; i < N; i++){
	  cin >> arr[i];
	  }
	  for(int i=0; i <N; i++){
	  	
	  	if(map.find(arr[i]) == map.end()){
	  		index++;
		  }
		 
		  map[arr[i]] = true;
	  }
	  
  	if(M == index){
  		cout << "BENAR" << endl;
	  }	
	 else{
	 	cout << "BELI BARU" << endl;
	 	cout << ((M-index) + 1) << endl;
	 } 
} 
