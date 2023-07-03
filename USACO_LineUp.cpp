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

map<string,vector<string>>mp; map<string,int>vis;

void dfs(string node){
   if(vis[node]) return;

   vis[node] = 1;
   cout << node << endl;

   for(auto it : mp[node]){
      if(!vis[it]) dfs(it);
   }
}


void solve(){
 string arr[] = {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
 int n; cin >> n;
 
 mp["Beatrice"] = {};
 mp["Belinda"] = {};
 mp["Bella"] = {};
 mp["Bessie"] = {};
 mp["Betsy"] = {};
 mp["Blue"] = {};
 mp["Buttercup"] = {};
 mp["Sue"] = {};



 vis["Beatrice"] = 0;
 vis["Belinda"] = 0;
 vis["Bella"] = 0;
 vis["Bessie"] = 0;
 vis["Betsy"] = 0;
 vis["Blue"] = 0;
 vis["Buttercup"] = 0;
 vis["Sue"] = 0;



 while(n--){
   string a, b ,c ,d ,e, f;
   cin >> a >> b >> c >> d >> e >> f;
   mp[a].pb(f);
   mp[f].pb(a);
 }

 // for(auto it : mp){
 //   cout << it.fi << "-> ";
 //   for(auto d : it.se){
 //      cout << d << " ";
 //   }
 //    cout << endl;
 // }

 for(int i=0; i < 8; i++){
   int cnt =0; 
   for(auto it : mp[arr[i]]){
      if(!vis[it]) cnt++;
   }

   if(cnt ==2) continue;

   dfs(arr[i]);
 }



   




   
   


     











}






signed main(){
   BOOST
   Usaco("lineup");
   solve();
   
   
}

   
 
  