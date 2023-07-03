#include <iostream>

using namespace std;

int linear(int arr[], int n ,int target){
	
	int temp = -1;
	for(int i = 0; i < n; i++){
		if(arr[i] == target){
			temp = i;
			break;
		}
	}
	cout << temp << endl;
}




int main(){
	int n ;
	cin >> n;
	int target; cin >> target;
	int arr[n];
	
	for(int i =0; i < n; i++){
		cin >> arr[i];
	}
	linear(arr, n, target);	

  return 0;

	
	
	
	
	
	
}
