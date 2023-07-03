#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int array[] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
	int arrSize = sizeof(array)/sizeof(array[0]);
	
	
	for (int i = 0; i < arrSize; i++) { 
		for (int j = 0; j < arrSize-1; j++) { 
			if (array[j] > array[j+1]) { 
				swap(array[j],array[j+1]); 
				} 
		} 
	}
	
	for(int i = 0; i<arrSize; i++){
		cout << array[i] << " ";
	}
      
	string s = "monkey"; 
	sort(s.begin(), s.end());
	cout << s << endl;

	
	
	//
	for(int brs = 0; brs < 5; brs++){
		for(int klm = 0; klm <= brs; klm++){
			cout << "*";
			
		}
		cout << endl;
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = 5; j > i; j--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "===================================" << endl;
	
	
	int n; cin >> n;
	for(int x = 1; x <=n; x++){
		for(int y = 1; y <= x; y++){
			cout << x;
		}
		cout << endl;
	}
	
	
	
	
	
	
}
