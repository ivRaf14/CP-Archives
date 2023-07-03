#include <bits/stdc++.h>
#define ll long long
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

vector<int>adj[1000005];
pii arr[1000005];
int ans = 0;
string from = "";

void dfs(string par, int node, int cnt){

   for(auto it : adj[node]){
      //cout << par << " " << node << " " << arr[it].fi << endl;
      dfs(par, it, cnt + arr[it].fi);
   }
   
   if(cnt > ans){
      ans = cnt;
      from = par;
   }
}



void solve(){
   int n, k, p;
   cin >> n >> k >> p;
  
   map<string,vector<int>> top;


   for(int i=1; i <= n; i++){
      cin >> arr[i].fi;
      arr[i].se = i;
   }

   for(int i = 1; i<= p; i++){
      string a; cin >> a;
      int ipt; cin >> ipt;

      top[a].pb(ipt);
   }

   for(int i = 1; i <= n-p; i++){
      int a, b;
      cin >> a >> b;
      adj[a].pb(b);
   }


   for(auto iter : top){
      for(auto v : iter.se){
         dfs(iter.fi, v,arr[v].fi);
      }
   }

   // for(auto elem : top){
   //    //cout << "par =" << elem.fi << "-> ";
   //    for(auto it : elem.se){
   //       cout << "par " << arr[it].fi << "->";

   //       for(auto v : adj[it]){
   //          cout << arr[v].fi << " ";
   //       }
   //       cout << endl;
   //    }
   //    //cout << endl;
   // }

   //for(auto it : top[0]) dfs[]
   cout << from << endl;
   cout << ans << endl;




}




signed main(){
   BOOST
   solve();
}

   
 
  