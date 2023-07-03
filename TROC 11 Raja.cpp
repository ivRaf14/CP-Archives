#include <bits/stdc++.h>

using namespace std;



int main(){
	ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    long long int  N, M, res; cin >> N >> M;
    
	res = 2 * (4 * (N-2) + (N-2) * (N-3)) + 2 * (4 * (M-2) + (M-2) * (M-3));

	cout << res << endl;
	
}




