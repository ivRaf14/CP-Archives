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
// 1sec -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

 
 
void solve(){
   int n, m; cin >> n >> m;
   int arr[n];
   for(int i=1; i <= n; i++){
      arr[i] = i;
   }
   for(int i=0; i < m; i++){
      int a, b;cin >> a >> b;
      swap(arr[a], arr[b]);
   }

   int q; cin >> q;

   
   while(q--){
      int ipt; cin >> ipt;
      cout << arr[ipt] << endl;
   }



}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  