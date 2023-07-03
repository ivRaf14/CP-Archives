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

bool vis[100005];
pii arr[100005];
vector<int> adj[100005];
int xmin, ymin, xmax,ymax;

void dfs(int node){
   if(vis[node]) return;
   vis[node] = 1;
   xmin = min(xmin, arr[node].fi);
   ymin = min(ymin, arr[node].se);
   xmax = max(xmax, arr[node].fi);
   ymax = max(ymax, arr[node].se);

   for(auto it : adj[node]){
      if(!vis[it]) dfs(it);
   }
}

void solve(){
   int n,m; cin >> n >> m;
   

   for(int i=0; i < n; i++){
      cin >> arr[i].fi >> arr[i].se;
   }
   

   for(int i=0;  i< m; i++){
      int a, b; cin >> a >> b;
      a--;
      b--;

      adj[a].pb(b);
      adj[b].pb(a);
   }

   int ans = INT_MAX;

   for(int i=0; i < n; i++){
      if(!vis[i]){
         xmax = xmin = arr[i].fi;
         ymax = ymin = arr[i].se;
         dfs(i);
      }

      int tmp = (xmax - xmin) + (ymax - ymin);
      ans = min(ans, 2 * tmp);
   }

   cout << ans << endl;



}




signed main(){
   BOOST
   Usaco("fenceplan");
   solve();
}

   
 
  