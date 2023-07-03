#include <bits/stdc++.h>
#define int long long
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

vector<int> adj[100005];
int vis[100005];

void dfs(int node, int grup){
  if(vis[node] != 0) return;

 
  vis[node] = grup;

  for(auto it : adj[node]){
    if(!vis[it]){
      dfs(it, grup);
    }
  }
}
int tc = 1;

void solve(){
  //cout << tc << "-> ";tc++;
  int n, m;
  cin >> n >> m;

  for(int i=0;  i< m; i++){
    int a, b;
    cin >> a >> b;
    adj[a].pb(b);
    adj[b].pb(a);
  }

  int grup_num = 1;

  for(int i=1; i <= n; i++){
    if(vis[i] == 0){
      dfs(i, grup_num);
      grup_num++;
    }
  }

 

  vector<int> grup [grup_num+5];

  for(int i =1; i<= n; i++){
    grup[vis[i]].pb(i);
  }



  int rp = 0;
  int bp = 0;

  int cal [grup_num+5][2];

  for(int i = 1; i <= grup_num; i++){
    cal[i][0] = 1e9;
    cal[i][1] = 1e9;
  }

  // for(int i=1; i<=n; i++){
  //   cout << i << "-> ";
  //   for(auto it : grup[i]){
  //     cout << it << " ";
  //   }
  //   cout << endl;
  // }

  int rsi = grup[1].size();
  int bsi = grup[grup_num-1].size();
  //cout << rsi << " " << bsi;

  for(int i = 1; i<= n; i++){
    int gnode = vis[i];

    int red = i - grup[1][rp]; 
    int blue = i - grup[grup_num-1][bp]; 
    red*=red;
    blue*= blue;
    //cout << red << " " << blue << endl;

    int red2 = i - grup[1][(rp+1) % rsi]; 
    int blue2 = i - grup[grup_num-1][(bp+1) % bsi]; 
    red2*=red2;
    blue2*= blue2;
    //cout << i << "-> " << grup[1][rp]<< " " << grup[grup_num-1][bp] << " " << grup[1][rp+1 % rsi] << " " << grup[grup_num-1][bp+1 % bsi] << ">>" << rp + 1 % rsi << bp<< endl;
    cal[gnode][0] = min(cal[gnode][0], min(red, red2));
    cal[gnode][1] = min(cal[gnode][1], min(blue, blue2));

    if(vis[i] == 1 && rp+1 < rsi)rp++;
    else if(vis[i] == grup_num-1 && bp+1 < bsi)bp++;
  }
  int ans = 1e9;

  for(int i=1; i<= grup_num; i++){
    ans = min(ans, cal[i][0] + cal[i][1]);
    //cout << cal[i][0] << " " << cal[i][1] << endl;
  }

  cout << ans << endl;

  for(int i=1; i<=n; i++){
    adj[i].clear();
    vis[i] = 0;
  }

    

}




signed main(){
   BOOST
   int n; cin >> n;
    for(int i =1; i<=n; i++){
      cout << i << "-> ";
        solve();
    }
}












   
 
  
