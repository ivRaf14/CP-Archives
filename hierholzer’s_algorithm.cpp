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
vector<int> adj[100000];

void deledge(int v, int u){
   for (int i = 0; i < adj[u].size(); i++) {
     if (adj[u][i] == v) {
         adj[u].erase(adj[u].begin() + i);
         break;
     }
   }

   for (int i = 0; i < adj[v].size(); i++) {
        if (adj[v][i] == u) {
            adj[v].erase(adj[v].begin() + i);
            break;
        }
    }
}

void eulerpath(){
   stack<int>resst, tempst;

   tempst.push(1);

   while(!tempst.empty()){
      int top = tempst.top();
      
      if(adj[top].size() != 0){
         int u = adj[top][0];

         cout << adj[top][0] << endl;
         tempst.push(adj[top][0]);
         deledge(top, u);
      }
      else{
         resst.push(top);
         tempst.pop();
      }

   }

   while(!resst.empty()){
      cout << resst.top() << " ";
      resst.pop();
   }

}
 
 
void solve(){
   int n, m;
   cin >> n >> m;

   

   for(int i=0; i< m; i++){
      int a, b;
      cin >> a >> b;
      adj[a].pb(b);
      adj[b].pb(a);
   }

   eulerpath();



}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  