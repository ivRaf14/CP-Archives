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


vector<int>adj[105];
bool path[105][105];
bool vis[105];


void dfs(int node){
   if(vis[node]) return;

   vis[node] = 1;

   for(auto it : adj[node]){
      if(!vis[it] && path[node][it] == 1) dfs(it);
   }
}



void solve(){
   while(1){

      int n , m;
      cin >> n >> m;

      if(n ==0 && m == 0) break;

     vector<pii>pen;
     //adj.clear();

      for(int i=0; i < m; i++){
         int a, b;
         cin >> a >> b;

         path[a][b] = 1;
         path[b][a] = 1;

         pen.pb({a,b});
         adj[a].pb(b);
         adj[b].pb(a);
      }

      int ans = 0;

      for(auto it : pen){
         path[it.fi][it.se] = 0;
         path[it.se][it.fi] = 0;

        dfs(0);

         for(int i=0; i < n;i++){
            if(!vis[i]){
               ans = 1;
               break;
            }
         }

         if(ans == 1)break;

         path[it.fi][it.se] = 1;
         path[it.se][it.fi] = 1;

         memset(vis,false, sizeof(vis));



      }

      if(ans == 0) cout << "No" << endl;
      else cout << "Yes" << endl;

      for(int i=0; i < n; i++){
         adj[i].clear();
      }

      memset(vis,false, sizeof(vis));

   }



}




signed main(){
   BOOST
   solve();
}

   
 
  