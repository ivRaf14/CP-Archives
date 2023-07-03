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
const int INF = 1e9; 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}


 
 
void solve(){
   int n, m, a ,b;
   cin >> n >> m >> a >> b;

   vector<pair<int,int>> vec [n+5];
   bool visited[n+5];
   memset(visited,false, sizeof(visited));
   int dist[n+5];

   for(int i=0; i <= n;i++){
      dist[i] = INF;
   }

   dist[a] = 0;


   for(int i=0; i < m; i++){
      int x,y,jar;
      cin >> x >> y >> jar;
      vec[x].pb({y,jar});
      vec[y].pb({x,jar});
   }

   priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
   pq.push({0,a});


   while(!pq.empty()){
      pair<int,int> temp = pq.top();
      visited[temp.se] = true;
      pq.pop();
      


      for(auto it: vec[temp.se]){
         if(!visited[it.fi] && dist[it.fi] > temp.fi + it.se){
            dist[it.fi] = temp.fi + it.se;
            pq.push({dist[it.fi], it.fi});
         }
         
      }


   }

   cout << dist[b] << endl;







}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  