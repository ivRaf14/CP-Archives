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





void solve(){
   int n,m,k;
   cin >> n >> m >> k;
   int arr[n];
   bool spe = false;
   map<int,pii>mp;

   for(int i=0; i < n; i++){
      arr[i] = -1;
   }

   int pos[m];

   for(int i=0; i< m; i++){
      cin >> pos[i];
      if(pos[i] == 1) spe = true;
      mp[pos[i]] = {i,-1}; 
   }

   while(k--){
      int a,b;
      cin >> a >> b;
      mp[a].se = 1;
      arr[b-1] = a;
   }

   for(int i=0 ;i <n; i++){
      if(arr[i] == -1) continue;

      int idx = mp[arr[i]].fi;

      for(int j = idx-1; j >=0; j--){
         if(mp[pos[j]].se == 1) continue;

         for(int k = i-1; k >=0; k--){
            if(arr[k] == -1){
               arr[k] = pos[j];
               mp[arr[k]].se = 1;
               break;
            }
         }
      }

   }

   if(spe){
      if(mp[1].se == -1){
        

         for(int i=0; i < m; i++){
            if(mp[pos[i]].se == 1) continue;
            int idx = max(i-1,0);
            int prev = pos[idx];
            bool place = false;

            if(i == 0) place = true;

            for(int j = 0; j < n; j++){
               if(arr[j] == prev) place = true;
               else if(arr[j] == -1 && place){
                  arr[j] = pos[i];
                  mp[arr[j]].se = 1;
                  break;
               }
            }

            if(pos[i] == 1) break;
         }
      }
      for(int i =0; i < n; i++){
         //cout << arr[i] << " ";
         if(arr[i] == 1){
            cout << i+1 << endl;
            break;
         }
         // return;
      }
   }
   else{
      for(int i=0; i< n; i++){
      if(arr[i] == -1){
         cout << i+1 << endl;
         break;
      }
   }
   }

   
  




   






}






signed main(){
   BOOST
   Usaco("milkorder");
   solve();
   
   
}

   
 
  