#include<bits/stdc++.h>

using namespace std;

int arr[100000];

void print(int arr[], int arrN){
	

	bool flag = true;
	
	for(int i=0; i < arrN; i++){
		int res = 0;
		res += arr[i];
		
		if(res == 0){
			flag = false;
		}
	}
	if(flag){
		cout << "YES" << endl;
		for(int i=0; i < arrN; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	else{
		cout << "NO" << endl;
	}
}



int main(){
	int N, arrN; cin >> N;
	
	for(int i=0; i < N; i++){
		cin >> arrN;
		
		for(int i=0; i < arrN; i++){
			cin >> arr[i];
		}
		print(arr, arrN);
		
	}
	
	
}
	

