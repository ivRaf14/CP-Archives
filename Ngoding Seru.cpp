#include <iostream>
#include <algorithm> 

using namespace std;

int main(){
	int a;
	int arr[a];
	cin >> a;
	
	for(int i = 0; i < a; i++){
		cin >> arr[i]; 
	}
	
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a-2; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
	
	for(int i=0; i < a; i++){
		cout << arr[i] << endl;
	}
	
	
	
	
	
}
