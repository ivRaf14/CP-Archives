#include <bits/stdc++.h>

#define ll long long 

using namespace std;

	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int maxi = INT_MIN;
	int mini = INT_MAX;
	
	int n;
	while(cin >> n){
		if(n !=0){
			if(n > maxi) maxi = n;
			if(n < mini) mini = n;
		}
		
		if(n == 0 || n== EOF){
			cout << mini << " " << maxi << endl;
			maxi=INT_MIN; mini = INT_MAX;
		}
	}
	cout << mini << " " << maxi << endl;
	
}
	
	
	
	
	
	
	
		





