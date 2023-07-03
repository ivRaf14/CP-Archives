#include <iostream>
#include <cstdlib>
#include <math.h> 
using namespace std;


 
int main(){
	int arr[100000], modus,count, n, x=1;
	
	cin >> n;
	for (int i = 0; i<=n-1;i++){
		cin >> arr[i];
	}
	modus = arr[0];
	for(int i =0 ; i <=n-1; i++){
		if(arr[i] > 0){
			count = 1;
			for(int j=i+1; j<=n-1; j++){
				if(arr[i] == arr[j]){
					arr[j] = 0;
					count +=1;
				}
			}
		if(count > 1){
			 x = count;
			modus = arr[i];
		}
		else{
			if(count == x){
				if(arr[i] > modus){
					x = count;
					modus = arr[i];
				}
			}
		}	
		}
	}
	cout << modus <<endl;

	
		
	
	
	
	
	
	
   return 0;
  	
  }
		

