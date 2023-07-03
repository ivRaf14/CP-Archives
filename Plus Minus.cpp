#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	int n;
	double pn=0, nn=0, z=0;
	cin >> n;
	
	int arr[n];
	for(int i=0; i < n; i++){
		cin >> arr[i];
		
		if(arr[i] > 0){
			pn++;
		}
		else if(arr[i] < 0){
			nn++;
		}
		else{
			z++;
		}
	}
	
	pn = pn / n;
	nn = nn / n;
	z = z / n;
	cout << fixed << setprecision(6)<< pn << endl << nn << endl << z << endl;
	
	
}
