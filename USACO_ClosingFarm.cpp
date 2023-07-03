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

vector<int>adj[10000];
bool closed[10000];
bool vis[10000];
int cnt = 0;

void dfs(int node, bool *vis){
   if(vis[node] || closed[node]) return;

   cnt++;
   vis[node] = 1;
   for(auto it : adj[node]){
      if(!vis[it]) dfs(it, vis);
   }
}

// void check(bool * vis, int n, int cnt){
//    int rep = 0;

//    for(int i = 0;  i< n; i++){
//       if(vis[i] == 1){
//          rep++;
//       }
//    }
   
//    if(rep)
// } 

void solve(){
   int n, m;
   cin >> n >> m;

   for(int i=0; i < m; i++){
      int a, b; cin >> a >> b;
      adj[a-1].pb(b-1);
      adj[b-1].pb(a-1);
   }
   int arr[n];

   for(int i=0; i < n; i++){
      int a; cin >> a;
      arr[i] = a-1;
   }
   
   
   //memset(vis, false, sizeof(vis));
   dfs(0, vis);
   int rep = 0;

   // for(int i = 0; i < n; i++){
   //    if(vis[i] == 1){
   //       rep++;
   //    }
   // }

   if(cnt == n) cout << "YES" << endl;
   else cout << "NO" << endl;
   
  

   for(int i = 1; i < n; i++){
      memset(vis, false, sizeof(vis));
      cnt = 0;
      closed[arr[i-1]] = true;

      dfs(arr[n-1], vis);

      if(cnt == n-i) cout << "YES" << endl;
      else cout << "NO" << endl;

      
   }





}




signed main(){
   BOOST
   //Usaco("closing");
   solve();
}

   
 
  