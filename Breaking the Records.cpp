#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    
    for(int i=0; i < n; i++){
    	cin >> arr[i];
	}
	int max = arr[0];
	int min = arr[0];
	int cnths = 0;
	int cntlo = 0;
	
	for(int i=0;i < n;i++){
		if(max < arr[i]){
			max = arr[i];
			cnths++;
		}
		if(min > arr[i]){
			min = arr[i];
			cntlo++;
		}
	}
	cout << cnths <<" " << cntlo << endl;
}
