#include <bits/stdc++.h>

using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	string arr[n];
	vector<string> v;
	
	for(int i=0; i <n; i++){
		cin >> arr[i];
	}
	v.push_back(arr[0]);
	
	int f = 1;
	int end = n-1;
	while(f <= end){
		v.push_back(arr[end]);
		v.push_back(arr[f]);
		f++;
		end--;
	}
	
	for(int i=0; i <n; i++){
		cout << v[i] << endl;
	}
	
}




