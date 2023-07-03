#include <bits/stdc++.h>
#define int long long
//#define mp make_pair
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
const int MOD = 5 * 1e9;

void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}


int res[100005];

void solve(){
   int n; cin >> n;
   pii arr[n];
   for(int i=0; i < n; i++){
    int a, b;
    cin >> a >> b;
    arr[i].fi = b;
    arr[i].se = a;
   }

   sort(arr, arr+n);

   int l, r;
   l = 0;
   r = n-1;
   vector<int>ans;

   while(l <= r){
    if(l == r){
        ans.pb(2 * arr[l].fi);
        l++;
        r--;
    }
    else{
        int used = min(arr[l].se , arr[r].se);
        ans.pb(arr[l].fi + arr[r].fi);
        arr[l].se -=used;
        arr[r].se -=used;

        if(arr[r].se <= 0) r--;
        if(arr[l].se <= 0) l++;
        

    }
   }
   int res = 0;

   for(auto it : ans) res = max(res, it);

cout << res << endl;

}

// 1 5 5 9 10 12 14
// 1 2 1 3 3   2  1

// 1 2 1 3 3 2 1
// 1 2 3 


signed main(){
   BOOST
   Usaco("pairup");
   solve();
}

   
 
  