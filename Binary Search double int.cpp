#include <iostream>

using namespace std;

int binary(int arr[], int l ,int r, int target){
	int result = -1;
while (l <= r) { 
        int m = l + (r - l) / 2; 
  		
        // Check if x is present at mid 
        if (arr[m] == target) {
            result = m;
            r = m -1;
      }
  
        // If x greater, ignore left half 
        else if  (arr[m] < target){
		
            l = m + 1; 
  		}
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return result; 
}




int main(){
	int n ;
	cin >> n;
	int left = 0;
	int right = n-1;
	int mid = left + (right - left)/2; 
	
	int arr[n];
	
	for(int i =0; i < n; i++){
		cin >> arr[i];
	}
	int n_targets;
	cin >> n_targets;
	
	int targets[n_targets];
	for(int j = 0; j < n_targets; j++){
		cin >> targets[j];
	}
	
	for(int i = 0; i < n_targets; i++){
		cout << binary(arr, left, right, targets[i]) << endl;
	}
	

  return 0;

	
	
	
	
	
	
}
