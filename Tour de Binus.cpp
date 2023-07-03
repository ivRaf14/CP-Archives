#include <bits/stdc++.h>

#define ll long long 

using namespace std;

	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	int arr[n];
	
	for(int i=1; i <=n; i++){
		cin >> arr[i];
	}
	int a;string araha; cin >> a >> araha;
	int b;string arahb; cin >> b >> arahb;
	int hasila=0, hasilb=0;
	
	if(arahb == "right"){
		for(int i=b; i <= n; i++){
			if(arr[i] == 0){
				hasilb++;
			}
		}
	}
	else if(arahb == "left"){
		for(int i=b; i >= 1; i--){
			if(arr[i] == 0){
				hasilb++;
			}
		}
	}
	
	if(araha == "right"){
		for(int i=a;i<=n; i++){
			hasila+= arr[i];
		}
	}
	else if(araha == "left"){
		for(int i=a;i >=1; i--){
			hasila+= arr[i];
		}
	}
	cout << hasila << " " << hasilb << endl;
	
}
	
	
	
	
	
	
	
		





