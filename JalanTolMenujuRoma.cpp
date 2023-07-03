#include <bits/stdc++.h>
#define ll long long
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

int dist[505];
bool visited[505][505];
vector<int>adj[505];

void bfs(int start, int index){
  queue<int>qu;

  qu.push(start);
  dist[start] = 0;
  visited[index][start] = 1;
 

  while(!qu.empty()){
    int top = qu.front();
    qu.pop();

    for(auto it : adj[top]){
      if(!visited[index][it]){
        qu.push(it);
        visited[index][it] = true;
        dist[it] = dist[top] + 1;

        
      }
    }
    
  }
}



 
 
void solve(){
  int n, m, q, start, end;
  cin >> n >> m  >> q >> start >> end;
  

  for(int i=1; i<= n; i++){
    dist[i] = INT_MAX;
  }

  for(int i=0; i < m; i++){
    int a, b;
    cin >> a >> b;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  bfs(start, 0);

  
  // for(int i=1; i<=n; i++){
  //   cout << dist[i] << " ";
  // }

  int has = dist[end];
  

  for(int i= 1; i <= q; i++){
    int a, b;
    cin >> a >> b;
    int x = dist[a];
    int y = dist[b];
    adj[a].pb(b);
    adj[b].pb(a);

    
    bfs(start, i);
    
    
    //cout << "->" << dist[a] << " " << dist[b] << endl;
    int res = INT_MAX;
      
    
     res = dist[end];

    has = min(has, res);
    dist[a] = x;
    dist[b] = y;

    adj[a].pop_back();
    adj[b].pop_back();

  }
  cout << has << endl;






}


 
 
signed main(){
   BOOST
   solve();
}
   
 