#include <bits/stdc++.h>
//#define int long long
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
const int MOD = 1e9 + 7;

void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

vector<int>adj[1000];
int visited[1000];

int cnt[1000];

void dfs(int start){
   visited[start] = 1;
   cnt[start]+=1;
   

   for(auto v : adj[start]){
      if(!visited[v]) dfs(v);
   }
}



void solve(){
   int n; cin >> n;
   
   for(int i=0; i < n-1; i++){
      int a,b; cin >> a >> b;
      adj[a].pb(b);
   }

   for(int i = 1 ; i<=n; i++){
      memset(visited,0,sizeof(visited));
      dfs(i);
   }

   //dfs(4);



   for(int i = 1; i<=n; i++){
      //cout << cnt[i] << " ";
      if(cnt[i] == n){
         cout << i << endl;
         return;
      }
   }
   cout << -1 << endl;



     











}






signed main(){
   BOOST
  //Usaco("factory");
   solve();
   
   
}

   
 
  