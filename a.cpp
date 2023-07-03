#include <bits/stdc++.h>

#define ll long long 

using namespace std;


int main(){
	
	int n; cin >> n;
	int arr[n];
	int eq=0, nd=0, ni=0;
	
	for(int i=0; i <n; i++){
		cin >> arr[i];
	}
	for(int i=0;i <n-1; i++){
		if( arr[i] == arr[i+1]){
			eq++;
			
		}
		else if(arr[i] <= arr[i+1]){
			nd++;
		}
		else if(arr[i] >= arr[i+1]){
			ni++;
		}
		
	}
	//cout << eq <<" " << nd <<" " << ni << endl;
	
	if(eq== n-1){
		cout << "EQUAL" << endl;
	}
	else if(nd && eq!=n-1 &&ni==0){
		cout <<"NONDECREASING" << endl;
	}
	else if(ni && eq!=n-1 && nd==0){
		cout <<"NONINCREASING" << endl;
	}
	else{
		cout << "NONE" << endl;
	}

	
}
	
	
	
	
	
	
	
		





