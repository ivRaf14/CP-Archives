#include <iostream>

using namespace std;

int main(){
	int n, temp;
	int arr[n];
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];	
	}
	for(int i = 0; i < n; i++){
		for(int j= i+1; j < n; j++){
			if(arr[i]> arr[j]){
				swap(arr[i], arr[j]);
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	
	return 0;
}
