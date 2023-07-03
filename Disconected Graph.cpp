#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
//int range 1e9
//ll range 10e18
//double > float

const int limit = 1e6+5;
const int bat = 1e6;
const int int_range = 1e9;


vector<vector<int>> adj;
int nodekhusus[bat];
vector<bool>visited;
int res = 1;

void bfs(int i){


  queue<int>que;
  visited[i] = true;
  que.push(i);

  while(!que.empty()){
    int pros = que.front();
    que.pop();

    for(int j =1; j <= adj[pros].size(); j++){
      if(visited[adj[pros][j]] == false){
        que.push(adj[pros][j]);
        visited[adj[pros][j]] = true; 

      }
    }
  }
  res++;


}
void solve(){
  int n, e, q, r;   
  cin >> n >> e >> q >> r;
  int a[n];
  int b[n];
    for(int i=1; i <= e; i++){
    
      cin >> a[i] >> b[i];
      
    }
    for(int i=1; i <= q; i++){
      cin >> nodekhusus[i];
    }
    for(int i=1; i <= r; i++){
      int del; cin >> del;
      a[del] = 0;
      b[del] = 0;

    }
    for(int i=1;i<= e; i++){
      if(a[i]!=0 && b[i] !=0){
        adj[i].pb(b[i]);
      }
    }
    visited.assign(visited.size(), false);
    
      
    for(int i= 1; i <=n; i++){
      if(visited[i] == false){
        bfs(i);
      }  
    }

    
}

int main(){
  
  int n; cin >> n;
  while(n--){
    solve();
  }
  

}