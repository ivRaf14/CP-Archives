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

int n, m, k;
bool cmp(pair<int,int> a, pair<int,int> b){
   return (a.se < b.se);
}
bool cmp2(pair<int,int> a, pair<int,int> b){
   return (a.se == b.se && a.fi < b.fi);
}

bool cek(int x, int y){
   if(x >= 0 && x < n && y >= 0 && y <m) return true;
   else return false;
}
 
 
void solve(){   
   cin >> n >> m >> k;
   int arr[n][m];

   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         arr[i][j] = 1;
      }
   }

   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cin >> arr[i][j];
      }
   }
   
   pair<int,int> has = {INT_MAX,INT_MAX};

   for(int i=0; i < n; i++){
      for(int j=0; j < m; j++){
         int res = 1;
         if(cek(i-1, j)) res*= arr[i-1][j];
         if(cek(i+1, j)) res*= arr[i+1][j];
         if(cek(i, j-1)) res*= arr[i][j-1];
         if(cek(i, j+1)) res*= arr[i][j+1];

         if(res == k){
            if(has.se > j+1){
               has = {i+1, j+1};
            }
            else if(has.se == j+1){
               if(has.fi > i+1){
                  has = {i+1, j+1};
               }
            }
         }

      }
   }

   if(has.fi == INT_MAX && has.se == INT_MAX) cout << "0 0" << endl;
   else cout << has.fi << " " << has.se << endl;



}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  