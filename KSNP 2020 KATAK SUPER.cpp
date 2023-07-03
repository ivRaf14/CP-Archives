#include <bits/stdc++.h>
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
// 1sec -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

int sq(int a){
   return a*a;
}
 
 
void solve(){
   int n; cin >> n;
   int arr[n];
   int dp[n];

   for(int i=0; i < n; i++){
      cin >> arr[i];
   }
   dp[0] = 0;
   dp[1] = sq(arr[1] - arr[0]);
   int temp = 3 * sq(arr[0] - arr[2])+ sq(arr[2]- arr[1]);
   //cout  << dp[1] << " "<< temp << endl; 
   dp[1] = min(dp[1], temp);

   for(int i=2; i < n; i++){
      int jumpfi = dp[i-1] + sq(arr[i]- arr[i-1]);
      int jumpsec = dp[i-2] + (3 * sq(arr[i]- arr[i-2]));
      //cout << jumpfi << " " << jumpsec << endl;
      dp[i] = min(jumpfi, jumpsec);

      //move backward; 
      if(i < n-1){
         int back1 = sq(arr[i+1]- arr[i]);
         int back2 = 3 * sq(arr[i-1]- arr[i+1]);
         dp[i] = min(dp[i], dp[i-1] + back1 + back2);
      }
      
   }

   cout << dp[n-1] << endl;

   // for(int i=0; i< n; i++){
   //    cout << dp[i] << " ";
   // }
}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  