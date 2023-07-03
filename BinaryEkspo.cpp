#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;
//int range 1e9
//ll range 1e18
//double > float
// O(n) -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}
ll fastexp(int a, ll b){
   ll res = 1;

   while(b > 0){
      if(b % 2 == 1) res= res * a % 10;
      a = (a * a) % 10; 
      b /=2;
   }
   return res;

}
 
 
void solve(){
   int a; ll b;
   cin >> a >> b;
   a %= 10;
   
   if(a == 0) cout << 0 << endl;
   else cout << fastexp(a,b) << endl;

}
 
 
signed main(){
  int n; cin >> n;
  while(n--){
   solve();
  }
}
   
 
  