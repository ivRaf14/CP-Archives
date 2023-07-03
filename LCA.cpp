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
const int N = 1006;

void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

vector<int> adj[N];
int height[N];
int up[N][17];

void dfs(int start){
    for(auto it : adj[start]){
        height[it] = height[start] + 1;
        up[it][0] = start;
        dfs(it);
    }
}

void solve(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        int m; cin >> m;
        while(m--){
            int a; cin >> a;
            adj[i].pb(a);
        }
    }

    up[1][0] = 1;
    dfs(1);

    for(int j=1; j <= 14; j++){
        for(int i=1; i<=n; i++){
            int par = up[i][j-1];
            up[i][j] = up[par][j-1];
        }
    }

    // for(int i=1; i<=n; i++){
    //     cout << up[i][0] << " ";
    // }

    int q; cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        if(height[a] < height[b]) swap(a,b);

        int diff = height[a] - height[b];

       for(int i = 14; i >=0; i--){
        if(diff & (1 <<i) ) a = up[a][i];
       }


        if(a == b){
            cout << a << endl;
            continue;
        }

        for(int i=14; i>= 0; i--){
            if(up[a][i] != up[b][i]){
                a = up[a][i];
                b = up[b][i];
            }
        }

        cout << up[a][0] << endl;
    }

    
    for(int i=0 ; i<=n; i++){
        adj[i].clear();
        height[i] = 0;
    }

    for(int j=0; j <= 14; j++){
        for(int i=0; i<=n; i++){
            up[i][j] = 0;
        }
    }

   



}




signed main(){
   BOOST
   int n;
   int cnt = 1;
   cin >> n;
   while(n--){
    cout << "Case " << cnt++ << ":" << endl;
    solve();
   }
   //solve();
}

   
 
  