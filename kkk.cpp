#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;
//int range 1e9
//ll range 1e18
//double > float
// 1sec -> 1e8
const int MOD = 1e9 + 7;

void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}



void solve(){
   int n; cin >> n;
   double ans = 0;

   while(n--){
      double a; cin >> a;
      cin >> a;
      ans+=a;
   }
   ans = ans / 2;
   cout << ans << endl;



}




signed main(){
   BOOST
   solve();
}

   
 
  