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
   int n, s;
   cin >> n >> s;
   int arr[n];
   int c[s+1];
   int ans = LLONG_MAX;
   int k = 0;

   for(int i=0; i < n; i++) cin >> arr[i];

   for(int i =0 ; i <= s; i++) c[i] = -1;

   for(int i=0; i < n; i++){
      for(int j = s; j >arr[i]; j--){
         c[j] = max(c[j], c[j - arr[i]]);
      }
      c[arr[i]] = i;

      if(c[s] >= k){
         ans = min(ans, i -c[s] + 1);
         k = c[s] + 1;
      }
   }

   // for(int i=0 ; i <= s; i++){
   //    cout  << i << " "<< c[i] << endl;
   // }
   cout << (ans == LLONG_MAX ? -1 : ans) << endl;



}




signed main(){
   BOOST
   solve();
}

   
 
  