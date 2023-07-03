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

 int n,m,k;
int arr[1000];
map<int,int>mp;

int ting(int start){
   int cnt = 0;
   vector<int>vec;
   for(int i =0; i < m; i++){
      if(arr[i] == start){
         for(auto it : vec) mp[it] = 1;
         return cnt;
      }
      else{
         if(mp[arr[i]] == 1) continue;
         else{
            vec.pb(arr[i]);
            cnt++;
         }
      }
   }

   return -1;
}




void solve(){
 
  cin >> n >> m>> k;
  int pos[n];
  for(int i=0; i< n; i++) pos[i] = -1;
  

  for(int i=0; i<m; i++){
   cin >> arr[i];
   mp[arr[i]] = 0;
  }

  while(k--){
   int a, b; cin >> a >> b;
   pos[b-1] = a;
   mp[a] = 1;
  }   

  for(int i=0; i < n; i++){
      if(pos[i] == -1 || pos[i] == INT_MAX) continue;

      int her = ting(pos[i]);
      if(her == -1) continue;

      for(int j = i-1; j >= 0; j--){
         if(pos[j] != -1) continue;
         else{
            pos[j] = INT_MAX;
            her--;
         }

         if(her == 0) break;
      }


  }

  for(int i=0; i < n; i++){
   cout << pos[i] << " ";
   if(pos[i] == -1 ){
      cout << i+1 << endl;
      return;
   }
  }

  for(int i=0; i < n; i++){
   if(pos[i] == INT_MAX){
      cout << i+1 << endl;
      return;
   }
  }




   






}






signed main(){
   BOOST
   //Usaco("milkorder");
   solve();
   
   
}

   
 
  