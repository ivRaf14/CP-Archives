#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int data[n];
	
	for(int i=0;i < n; i++){
		cin >> data[i];
	}
	sort(data,data+n);
	
	double median;
	if(n % 2 == 1){
		median = data[n/2];
	}
	else{
		median =(data[(n-1)/2] + data[n/2])/2.0;
	}
	cout <<fixed << setprecision(1)<< median << endl;
	
	
	
}
