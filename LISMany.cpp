#include <bits/stdc++.h>
#define int long long
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
const int MOD = 1e9 + 7;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

 
 
void solve(){
   int n;
   cin >> n;
   int arr[n];
   int dp[n];
   int cara[n];
   int ans = 0;

   for(int i=0; i < n; i++){
      cin >> arr[i];
      dp[i] = 1;
      cara[i] = 0;
   }

   for(int i=1; i < n; i++){
      for(int j=0; j < i; j++){
           if(arr[i] > arr[j] && dp[i] <= dp[j]){
            dp[i] = 1 + dp[j];
         } 
       } 
       ans = max(ans, dp[i]);
   }
   
   int temp = 0;
   
   
   for(int i=0; i < n; i++){
      if(dp[i] == 1){
         cara[i] = 1;
         continue;
      }
      for(int j=0; j < i; j++){
         if(arr[i] > arr[j] && dp[i] == dp[j] + 1){
            cara[i] = (cara[i] + cara[j]) % MOD;
         }
      }

      if(dp[i] == ans){
         temp = (temp+ cara[i]) % MOD;
      }
   }
   
   //int res = (fi * se  * th ) % MOD;
   cout<< ans << " "<< temp << endl;


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  