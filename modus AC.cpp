#include <bits/stdc++.h>

#define ll long long 

using namespace std;




	
int main(){ 
	int n; cin >> n;
	int arr[100005];
	
	
	for(int i=0; i <n; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr+n);
	
	//for(int i=0; i < n; i++) cout << arr[i] << " ";
	
	int numnow = arr[0];
	int modus = numnow;
	int cnt = 1;
	int cntmod = 1;
	
	for(int i=1; i<n; i++){
		if(arr[i] == numnow)cnt++;
		else{
			cnt = 1;
			numnow = arr[i];
		}
		
		if(cnt >= cntmod){
				cntmod = cnt;
				if(numnow > modus) modus = numnow;
		}
			
		//cout << "cnt " << cnt << endl;
		//cout << "modus" << modus << endl;
		//cout << "no sekrang " << numnow << endl;
		//cout << "cnt mod " << cntmod << endl;
		//cout << endl;
	}
	cout << modus << endl;

  
 
}
