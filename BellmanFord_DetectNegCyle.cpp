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

struct Node
 {
    int s, e, w;
 }; 
 
void solve(){
   int n, m;
   cin >> n >> m;
   int dist[n];

   for(int i=0; i < n; i++){
      dist[i] = INT_MAX;
   }
   dist[0] = 0;

   Node path[m];

   for(int i=0; i < m; i++){
      cin >> path[i].s >> path[i].e >> path[i].w;
   }

   for(int i=0; i < n-1; i++){
      for(int j =0; j < m; j++){
         if(dist[path[j].s] != INT_MAX && dist[path[j].e] >  dist[path[j].s] + path[j].w){
            dist[path[j].e] =  dist[path[j].s] + path[j].w;
         }
      }
   }
   bool gak_mau = false;

    for(int j =0; j < m; j++){
         if(dist[path[j].s] != INT_MAX && dist[path[j].e] >  dist[path[j].s] + path[j].w){
            gak_mau = 1;
            break;
         }
      }

   // for(int i=0; i < n; i++){
   //    cout << dist[i] << " ";
   // }
   if(gak_mau) cout << "Pak Dengklek tidak mau pulang";
   else if(dist[n-1] == INT_MAX) cout << "Tidak ada jalan";
   else cout << dist[n-1];
   cout << endl;

}


 
 
signed main(){
   BOOST
   int n; cin >> n;
   while(n--){
      solve();
   }
}
   
 
  