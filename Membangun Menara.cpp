#include <bits/stdc++.h>

using namespace std;




int main(){
	int n, n_inp,a ,b, c, total_min=0, total_max=0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> n_inp;
		for(int j = 0; j < n_inp; j++){
			cin >> a >> b >> c;
			
			total_min+= min(a, min(b,c));
			total_max += max(a,max(b,c));
		}
		cout << total_min <<" " << total_max << endl;
		total_min = 0;
		total_max = 0;
	}
	
	
}
