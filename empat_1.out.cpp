#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
//int range 1e9
//ll range 10e18
//double > float
const int limit = 1e6+5;
const int bat = 1e6;
const int int_range = 1e9;
const int M = 1e6;

ll pangkat(ll a, ll b){
	ll result = 1;

	while(b > 0){
		if(b % 2 == 1) {
			result = (result * a) % M;
		}

		a = (a * a) % M;
		b /=2;
	}
	return result;
}

ll hitungdig(ll x){
	int dig = 0;
	while(x){
		x/=10;
		dig++;
	}
	return dig;
}

int main()
{
    ll a , b;
    cin >> a >> b;
    // 100 ^ 3
    ll has = pangkat(a, b);

    if(pow(a,b) >= M){
    	ll tmp = has;
    	int dgt = 0;
    	if(tmp = 0) dgt = 1;
    	for(; tmp > 0; dgt++, tmp/=10);
    	dgt = 6- dgt;
    	while(dgt--) cout << 0;
    	cout << has << endl;
    }
    else cout << has << endl;

}