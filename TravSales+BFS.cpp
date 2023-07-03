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
vector<int> adj[10009];
bool visited[10009];
int dist[10009];
vector<int>ker;
int n, m, k;


void bfs(int start){
    for(int i=0; i<=n; i++){
      dist[i] = INT_MAX;
      visited[i] = false;
    }
   queue<int> que;
   dist[start] = 0;
   visited[start] = 1;
   que.push(start);

   while(!que.empty()){
      int top = que.front();
      que.pop();

      for(auto it : adj[top]){
         if(!visited[it]){
            dist[it] = min(dist[it], 1 + dist[top]);
            visited[it] = 1;
            que.push(it);
         }
      }

   }

}
 
 
void solve(){
   
   cin >> n >> m >> k;

   for(int i=0; i < m; i++){
      int a, b;
      cin >> a >> b;
      adj[a].pb(b);
      adj[b].pb(a);
   }

   for(int i=0; i < k; i++){
         int a; cin >> a;
         ker.pb(a);
   }

   sort(ker.begin(), ker.end());
   
   int resu = INT_MAX;

   do{

      int idx = 1;
      int has = 0;

      for(int i=0; i < k; i++){
               
               bfs(idx);
               
               has+=dist[ker[i]];
               idx = ker[i];
               //cout << has << " " << idx << endl;
         }

         //cout << idx << "--,,,";
         bfs(idx);
         has+=dist[1];
         resu = min(resu, has);

   } while (next_permutation(ker.begin(), ker.end()));
   

   

   cout << resu << endl;
   



}

signed main(){
   BOOST
   solve();
}

