#include <bits/stdc++.h>
#define int long long
#define ll unsigned long long
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
// 0 -5 3
// 0 10 0


float calcu(int x1, int y1, int x2, int y2, int x3, int y3){
   int atas = (x1 * y2) + (x2 *y3) + (x3 * y1);
   int bawah = (y1 * x2) + (y2 * x3) + (y3 * x1);
   float res = abs(atas - bawah);
   res/=2;
   return res;
}
 
 
void solve(){
   int n; cin >> n;
   vector<pair<int,int>>vec;
   float res = INT_MAX;

   for(int i=0; i < n; i++){
      int a, b;
      cin >> a >> b;
      vec.pb({a,b});
   }
   int dou = false;

   for(int i=0; i < n; i++){
      for(int j = i + 1; j < n; j++){
         for(int k = j + 1; k < n; k++){
            float tot = calcu(vec[i].fi, vec[i].se, vec[j].fi, vec[j].se, vec[k].fi, vec[k].se);
            //cout << fixed << setprecision(2) <<  tot << endl;
            if(tot == 0) continue;
            if(tot == res) dou = true;
            else if(tot <  res){
               res = tot;
               dou =false;
            }

         }
      }
   }
   if(res == INT_MAX || dou) cout << "-1.00" << endl;
   else cout << fixed << setprecision(2)<<res << endl;



}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  