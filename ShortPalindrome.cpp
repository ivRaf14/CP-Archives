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
    string s; cin >> s;
    map<char,int>mp;
    int pair[100][100];
    int cnt[100];
    int ans = 0;

    for(char ch : s){
      int idx  = ch - 'a';
      ans = (ans + cnt[idx]) % MOD;

      for(int i=0; i < 26; i++){
        cnt[i] = (pair[i][idx] + cnt[i]) % MOD;
      }

      for(int i=0; i < 26; i++){
        pair[i][idx] += mp[i];
        pair%=MOD;
      }

      mp[idx]++;
    }

    cout << ans << endl;



}




signed main(){
   BOOST
   solve();
}

   
 
  