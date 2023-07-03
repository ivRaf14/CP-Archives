#include <bits/stdc++.h>
#define ll long long
#define int unsigned long long
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

 
 
void solve(){
   int n; cin >> n;
   while(n--){
      int l ,q, r;
      cin >> l >> q >> r;
      vector<int>vec(q,l);

      for(int i=0; i < q; i++){
         for(int j=0; j <= i; j++){
            vec[j] = (vec[j] + 1 ) % 2;
         }
      }
      int idx = r % 2;
      int res = 0;

      for(int i=0; i < q; i++){
         if(vec[i] == idx) res++;
      }
      cout << res << endl;

   }
}


 
 
signed main(){
   int n; cin >> n;
   while(n--){
      solve();
   }

}
   
 
  