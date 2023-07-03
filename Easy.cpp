#include <iostream>
#include <cstdlib>


using namespace std;

int main(){
	int n,step=-1, total = 0, batas;
	cin >> n >> batas;
	int arr[n];
	
	
	for(int i=0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i =0; i < n; i++){
		total += arr[i];
		step+=1;
		if(total >= batas){
			break;
		}
	}
	cout << step<< endl ;
	
	
}
