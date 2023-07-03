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

bool good(int el, int n, int k){
   int ans = 0;

   for(int i = 1; i <= n; i++){
      int tmp = min(el / i , n);
      ans+=tmp;
   }

   return ans < k;
}

void solve(){
   int n; cin >> n;

   int l = 1;
   int r = n * n;
   int k = (n * n + 1) / 2;

   while(l <= r){
      int mid = (l + r) / 2;
      if(good(mid, n ,k)) l = mid + 1;
      else r = mid - 1;
   }

   cout << l << endl;



}




signed main(){
   BOOST
   solve();
}

   
 
  