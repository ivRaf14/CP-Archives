#include <bits/stdc++.h>

using namespace std;



int main(){
	ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
  	int n; cin >> n;
  	
  	int arr[n];
  	
  	for(int i=0;  i< n; i++){
  		cin >> arr[i];
	  }
	int index; cin >> index;
	
	for(int i=0; i< n; i++){
		if(arr[i] == index){
			cout << i + 1 << endl;
			break;
		}
	}  
}




