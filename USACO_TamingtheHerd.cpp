#include <bits/stdc++.h>
//#define int long long
#define mp make_pair
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





void solve(){
  int n; cin >> n;
  map<int,int>mp;

  for(int i = 1; i<= 100; i++) mp[i] = INT_MAX;

   for(int i= 1; i<= n; i++){
      int a; cin >> a;

      if(a == -1) mp[i] = -1;
      else if(a == 0) mp[i] = i;
      else{
         if(mp[i-a] == -1){
            mp[i-a] = i-a; 
            mp[i] = i-a; 
         }
         else if(mp[i-a] != -1){
            //cout << i << " " << a  << i-a << " " << mp[i-a] << endl;
            if(mp[i-a] == i-a ) mp[i] = i-a;
            else{
               cout << -1 << endl;
               return;
            }
         }
      } 
   }

   if(mp[1] == -1) mp[1] = 1;
   set<int>st;
   int cnt = 0;

   for(int i = 1; i<= n; i++){
      //cout << mp[i] << " ";

      if(mp[i] == -1){
         int l = 0;
         int r = 0;

         for(int j = i+1; j<=n; j++){
             if(mp[j] != -1){
               r = mp[j];
               break;
            }
         } 
           
         for(int j = i-1; j >= 1; j--){
            if(mp[j] != -1){
               l = mp[j];
               break;
            }
         }
         if(l != r)cnt++;
         
      }
      else st.insert(mp[i]);

   }

   cout << st.size() << " " << st.size() + cnt << endl;




   






}






signed main(){
   BOOST
   Usaco("taming");
   solve();
   
   
}

   
 
  