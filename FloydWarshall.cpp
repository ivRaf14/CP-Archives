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
   int n, m, jal;
   cin >> n >> m >> jal;

   int dist[n+1][n+1];

   for(int i=0; i <= n; i++){
      for(int j=0; j<=n; j++){
         if(i == j) dist[i][j] = 0;
         else dist[i][j] = INT_MAX;
      }
   }

   for(int i=0; i < m; i++){
      int x, y, z;
      cin >> x >> y >> z;

      dist[x][y] = min(dist[x][y], z);
      dist[y][x] = min(dist[y][x], z);
      
   }

   for(int k= 1; k<=n; k++){
      for(int i=1; i<=n; i++){
         for(int j=1; j<=n; j++){
            if(dist[i][k] != INT_MAX && dist[k][j] != INT_MAX){
               dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
         }
      }
   }

   int kun[jal];
   int res = 0;

   for(int i=0; i < jal; i++){
      cin >> kun[i];
   }
   for(int i=1; i < jal; i++){
      int x = kun[i-1];
      int y = kun[i];
      res += dist[x][y];
   }
   cout << res << endl;



}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  