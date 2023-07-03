#include <bits/stdc++.h>
using namespace std;

 

int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long int total =0, dua = 1;
    
    for(int i=0; i < n; i++){
    	cin >> arr[i];
	}
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+size);
	
	for(int j = n-1 ; j >=0 ; j--){
		total += (dua * arr[j]);
		dua *= 2;
	}
	
	cout << total;
	
    
}

