#include<bits/stdc++.h>

using namespace std;

int cnt = 1;
int arr[100000];

void print(int N){
	
	 
	
	for(int i=0; i < N; i++){
		cin >> arr[i];
	}
	sort(arr, arr+N);
	
	int max = arr[N-1];
	int min = arr[0];

	cout << "Case #" << cnt++ <<": "<< max-min << endl;
}





int main(){
	int N; cin >> N;
	
	int arN;
	
	for(int i=1; i <= N; i++){
		cin >> arN;
		print(arN);
		
	}
	
	
}
	

