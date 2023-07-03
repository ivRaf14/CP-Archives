#include <bits/stdc++.h>

using namespace std;


int main(){
	int n, index, total=0;
	cin >> n >> index;
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i =0; i < n; i++){
		if(i != index){
			total += arr[i];
		}
	}

	
	int harga,result;
	cin >>harga;
	
	int argh = total/2;
	
	if(argh < harga){
		cout << harga - argh << endl;
	}
	else{
		cout << "Bon Appetit" << endl;
	}
}

