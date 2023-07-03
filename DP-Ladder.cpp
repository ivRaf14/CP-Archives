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
  int arr[n];
  int dp[n];
  for(int i=0; i < n; i++)
  {
    cin >> arr[i];
    dp[i] = arr[i];
  }
  //dp[0] = arr[0];

  for(int i=1; i < n; i++){
    if(i == 1) dp[i] = max(dp[i] + dp[i-1], dp[i] + 0);
    else dp[i] = max(dp[i] + dp[i-1], dp[i] + dp[i-2]);
  }

  cout << dp[n-1] << endl;



}




signed main(){
  Usaco("ladder");
   BOOST
   solve();
}

   
 
  