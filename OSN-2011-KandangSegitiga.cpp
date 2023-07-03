#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define pii pair<int,int> 
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;
//int range 1e9
//ll range 1e18
//double > float
// 1sec -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}


 
 
void solve(){
   int n; cin >> n;
   pii arr[n];
   for(int i=0; i < n; i++){
      cin >> arr[i].fi >> arr[i].se;
   }
   set<int>st;

   for(int i=0; i< n-2; i++){
      for(int j = i+1; j < n-1; j++){
         for(int k= j + 1; k < n; k++){
            // compute

            int up = (arr[i].se * arr[j].fi) + (arr[j].se * arr[k].fi) + (arr[k].se * arr[i].fi);
            int down = (arr[i].fi * arr[j].se) + (arr[j].fi * arr[k].se) + (arr[k].fi * arr[i].se);
            int res = abs(up - down) / 2;
            if(res != 0) st.insert(res);
         }
      }
   }
   cout << st.size() << endl;


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  