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


int koin[1010], dp[30010]; 
 
void solve(){
   int n, m;
   cin >> n >> m;
   

   for(int i=0; i <= 30005; i++){
     dp[i] = 1e8;
   }

   for(int i=0; i < n; i++){
    cin >> koin[i]; 
   }

   dp[0] = 0;

   for(int i=0; i < n; i++){
    for(int j=m; j >= koin[i]; j--){
      dp[j] = min(dp[j], dp[j - koin[i]] + 1);
    }
   }

   //for(int i=0; i <= m; i)
   if(dp[m] == 1e8) cout << -1 << endl;
   else cout << dp[m] << endl;


}


 
 
signed main(){
   BOOST
   solve();
}
   
 