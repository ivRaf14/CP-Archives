#include <bits/stdc++.h>
#define int long long
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

int adj[100][100];
int dp[40000][100];

int allvis;
int n;
int has = INT_MAX;


int TSP(int mask, int node){
   if(mask == allvis){
      return min(adj[node][0], adj[0][node]);
   }

   if(dp[mask][node] != -1){
      return dp[mask][node];
   }
   
   int res = INT_MAX;
   for(int i=0; i < n; i++){   
      if((mask & (1 << i )) == 0){
         int temp = min(adj[node][i], adj[i][node]) + TSP(mask | (1 << i), i);
         res = min(res, temp);
         //cout << temp  << " " << res << endl;
      }  
   }
   //dp[mask][node] = res;
   return dp[mask][node]  = res;
} 
 
void solve(){
   cin >> n;

   for(int i=0; i < n; i++){
      for(int j=0; j < n; j++){
         cin >> adj[i][j];
         // if(adj[i][j] == 0){
         //    adj[i][j] = INT_MAX;
         // }
      }
   }

   for(int i=0; i < (1<<n); i++){
      for(int j=0; j < n; j++){
         dp[i][j] = -1;
      }
   }



   allvis = (1 << n) - 1;
   cout << TSP(1,0) << endl;

}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  