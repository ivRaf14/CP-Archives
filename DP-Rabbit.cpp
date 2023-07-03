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
    string s; cin >> s;
    int dp[n];
    for(int i=0; i < n; i++){
        dp[i] = -1;
    }

    dp[0] = 0;
    int cnt = 0;
    for(int i=1; i < n; i++){
        int pen = (s[i] == '"');
        //cout << pen << " ";

        if(s[i] == 'w') continue;

        if(dp[i-1] != -1) dp[i] = max(dp[i], dp[i-1] + pen);
        if(i >= 3  && dp[i-3] != -1) dp[i] = max(dp[i] , dp[i-3] + pen);
        if(i >= 5 && dp[i-5] != -1) dp[i] = max(dp[i], dp[i-5] + pen);
    }

    // for(int i=0; i < n; i++){
    //     cout << dp[i] << " ";
    // }
    

    cout << dp[n-1] << endl;



}




signed main(){
    Usaco("lepus");
   BOOST
   solve();
}

   
 
  