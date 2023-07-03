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

bool over = false;

ll pangkat(ll a, ll b){
  ll result = 1;

  while(b > 0){
    if(b % 2 == 1) {
      result *= a;
      if(result >= M){
        over = true;
        result %= M;
      }
    }

    a *= a;
    b /=2;
    if(b > 0 && a >= M){
      over = true;
      a%= M;
    }
  }

  return result;
}

int main()
{
    ll a , b;
    cin >> a >> b;
    // 100 ^ 3
   ll res = pangkat(a, b);

   if(over){
    cout.fill('0');
    cout.width(6);
    cout << res << endl;
   }
   else cout << res << endl;

}