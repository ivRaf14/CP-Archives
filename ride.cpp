/*
ID: ivanraf1
PROG: ride
LANG: C++
*/

#include <bits/stdc++.h>
#define int long long
#define mp make_pair
#define pb push_back
#define fi first
#define USACO freopen("filename.in","r",stdin); freopen("filename.out","w",stdout);
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
//int range 1e9
//ll range 10e18
//double > float


 const int limit = 1e6+5;
 const int bat = 1e6;
 const int int_range = 1e9;
 const int MA = 1e8;


signed main(){
   freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);

  string a, b;
  cin >> a >> b;
  int res1, res2;
  res1 = res2 = 1;
  for(int i=0; i < b.size(); i++){
    
    res2 = res2 * ((int) b[i] - 64) % 47;
  }
  for(int i=0; i < a.size(); i++){
    res1 = res1 * ((int) a[i] - 64) % 47;
  }

  if(res1 == res2) cout << "GO" << endl;
  else cout << "STAY" << endl;
  return 0;

}