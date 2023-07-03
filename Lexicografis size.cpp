#include <bits/stdc++.h>

#define ll long long 

using namespace std;

bool cmp(string a, string b){
	if(a.size() < b.size()) return true;
	else if (a.size() == b.size()){
		if(a < b){
			return true;
		}
		return false;
	}
	else{
		return false;
	}
}
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	string arr[n];
	
	for(int i=0; i <n; i++){
		cin >> arr[i];
	}	
	

	sort(arr, arr+n, cmp);
	
	for(int i=0; i <n; i++){
		cout << arr[i] << endl;
	}
	
}
	
	
	
	
	
	
	
		





