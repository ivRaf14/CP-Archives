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


vector<string>all;
int n; 
vector<string>adj[100];

bool check(int a, int b){
   int x, y, xy;
   x = y = xy = 0;

   for(int i =0; i< n; i++){
      int aa, bb, ab;
      aa = bb = ab = 0;

      for(auto v : adj[i]){
         if(all[a] == v) aa++;
         if(all[b] == v) bb++;
      }

      if(aa && bb) xy++;
      else if(aa) x++;
      else if(bb) y++; 
   }
  
   return (xy > 0 && x > 0 && y > 0);
}


void solve(){
  cin >> n;
  

   for(int i=0; i < n; i++){
      int m; cin >> m;

      while(m--){
         string s; cin >> s;
         adj[i].pb(s);
         bool dup = 0;

         for(int i=0; i < all.size(); i++){
            if(s == all[i]) dup = 1;
         }

         if(!dup) all.pb(s);
      }
   }

   //for(auto it : all) cout << it << " ";

   bool ans = 1;

   for(int i=0; i < all.size(); i++){
      for(int j = i+1; j < all.size(); j++){

         //cout << all[i] << " " << all[j] << " " << check(i,j) << endl;
         if(check(i,j) == 1){
            ans = 0;
            break;
         }
      }
   }

   cout << (ans ? "yes" : "no") << endl;


   
   


     











}






signed main(){
   BOOST
   //Usaco("evolution");
   solve();
   
   
}

   
 
  