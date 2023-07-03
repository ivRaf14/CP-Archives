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

 
 
void solve(){
   int n; cin >> n;
   int arr[n][n];
   vector<pair<int,int>> adj[n];

   for(int i=0; i < n; i++){
      for(int j=0; j < n; j++){
         cin >> arr[i][j];
         adj[i].pb({j,arr[i][j]});
      }
   }
   int dist[n];
   bool visited[n];

   for(int i=0; i < n; i++){
      visited[i] = false;
      dist[i] = INT_MAX;
   }

   priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
   dist[0] = 0;

   pq.push({0,0});
   int cnt= 0;
   int res= 0;
   while(!pq.empty()){
      pair<int,int> tmp = pq.top();
      if(visited[tmp.se]){
         pq.pop();
         continue;
      }

      visited[tmp.se] = 1;
      res+= tmp.fi;
      //cout << res << endl;
      cnt++;
      if(cnt == n) break;

      pq.pop();

      for(auto it : adj[tmp.se]){
         if(!visited[it.fi]){
            pq.push({it.se, it.fi});
         }
      } 
   }

   cout << res << endl;


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  