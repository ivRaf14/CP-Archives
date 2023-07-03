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
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

 
 
void solve(){
   int n, m;
   cin >> n >> m;
   bool visited[n+1];
   int dist[n+1];
   //memset(visited, false, sizeof(visited));
   for(int i=0; i <=n; i++){
      dist[i] = INT_MAX;
      visited[i] = false;
   }

   vector<vector<pair<int,int>>> adj (n+1);
   int arr[n+1][n+1];
   for(int i=0; i <=n; i++){
      for(int j=0; j<=n;j++){
         arr[i][j] = INT_MAX;
      }
   }
   for(int i=0; i < m; i++){
      int a, b, c;
      cin >> a >> b >> c;
      arr[a][b] = min(arr[a][b], c);
      arr[b][a] = min(arr[b][a], c);
   }

   for(int i=0; i <=n; i++){
      for(int j=0; j <=n; j++){
         if(arr[i][j] != INT_MAX){
            adj[i].pb({j, arr[i][j]});
         }
      }
   }

   int start; cin >> start;

   priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

   pq.push({0, start});
   dist[start] = 0;

  while(!pq.empty()){
      pair<int,int> temp = pq.top();
      visited[temp.se] = true;
      pq.pop();
      


      for(auto it: adj[temp.se]){
         if(!visited[it.fi] && dist[it.fi] > temp.fi + it.se){
            dist[it.fi] = temp.fi + it.se;
            pq.push({dist[it.fi], it.fi});
         }
         
      }


   }

   for(int i= 1; i<=n; i++){
      if(dist[i] != INT_MAX){
         if(i == start) continue;
         cout << dist[i] << " ";
      }
      else cout << -1 << " ";
      
   }
   cout << endl;
}


 
 
signed main(){
   BOOST
   int n; cin >> n;
   while(n--){
      solve();
   }
}
   
 
  
