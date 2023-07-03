#include <bits/stdc++.h>
#define int long long
#define int unsigned long long
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
   


}


 
 
signed main(){
   int n, money;
   cin >> n >> money;
   vector<pair<int,int>> vec;
   int bbk = 0;

   for(int i=0; i < n; i++){
      int a, b;
      cin >> a >> b;
      vec.pb({a,b});
   }
   sort(vec.begin(), vec.end());

   // for(auto it : vec){
   //    cout << it.fi << " " << it.se << endl;
   // }
   for(int i=0; i < n; i++){
      int max_val = vec[i].fi * vec[i].se;
      if(max_val <= money){
         bbk+=vec[i].se;
         money -= max_val;
      }
      else{
         int val = money / vec[i].fi; 
         bbk+= val;
         money-= vec[i].fi * val;
      }
   }
   cout << bbk << endl;
}
   
 
  