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

 
void operate(vector<int> &vec, int m, int &kill){
   

   kill = (kill + m ) % vec.size();

   vec.erase(vec.begin() + kill);

   // for(auto it : vec){
   //    cout << it << " ";
   // }
   // cout << endl;
 }
 
void solve(){
   int n, m, k;
   cin >> n >> m >> k;
   vector<int>vec;

   for(int i=1; i <= n; i++){
      vec.pb(i);
   }

   int kill = 0;
   m--;
   
   while(k--){
      if(vec.size() == 1) break;
      operate(vec, m, kill);
      
   }

   for(auto it : vec){
       cout << it << endl;
   }



}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  