#include <bits/stdc++.h>

using namespace std;



int main(){
	ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    long long x, y, z,pajak, promo, total;
    cin >> x >> y >>z;
    
    promo = x-(x * y)/100;
    pajak = (promo * z)/100;
    
    
    cout << promo + pajak << endl;
	
}




