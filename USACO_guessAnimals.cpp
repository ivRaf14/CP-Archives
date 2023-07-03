#include <bits/stdc++.h>
#define int long long
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
   vector<set<string>> vec (n);

   for(int i=0; i < n; i++){
      string a; cin >> a;
      int q; cin >> q;

      while(q--){
         string b; cin >> b;
         vec[i].insert(b);
      }
   }

   int ans = 0;

   for(int i=0; i < n; i++){

      for(int j = i+1; j < n; j++){
         int cnt = 0;

         for(string it : vec[i]){
            if(vec[j].count(it)) cnt++;
         }

         ans = max(ans, cnt);
      }
   }

   cout << ans+1 << endl;


}






signed main(){
   BOOST
   Usaco("guess");
    solve();
   
   
}

   
 
  