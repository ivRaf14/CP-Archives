#include <bits/stdc++.h>

using namespace std;

const int N = 200005;

int main(){
	int n, m; cin >> n >> m;
	
	int a[N], b[N];
	
	vector<int> vec_a(n), vec_b(n);
	
	for(int i=0; i < n; i++){
		cin >> a[i]  >> b[i];
		vec_a[i] = a[i];
		vec_b[i] = b[i];
	}

		
	sort(vec_a.begin(), vec_a.end(), greater<int>());
	sort(vec_b.begin(), vec_b.end());
	
	for(int i=0; i < n; i++){
		int ans = n-1;
		 ans -= lower_bound(vec_b.begin(), vec_b.end(), a[i]) - vec_b.begin();
    	 ans -= lower_bound(vec_a.begin(), vec_a.end(), b[i], greater<int>()) - vec_a.begin();
    	 
    	 cout << ans << endl;
	}
	
	
	
	
	
	
	
}
