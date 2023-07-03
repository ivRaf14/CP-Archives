#include <iostream>

using namespace std;

int main(){
	int n,total, sare, dim; cin >> n;
	int arr[n];
	
	
	for(int i =0; i < n; i++){
		cin >> arr[i];
		total += arr[i];
	}
	cout << "TOlott" << total;
	
	sare = (total  2) * 2;
	dim = total - sare;
	
	cout << sare << " " << dim;
	
	
	
	
}
