#include <bits/stdc++.h>
#define int long long
#define mp make_pair
#define pii pair<long,long>
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
const int N = 2e5;
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

vector<pair<int, pii>> adj; 
vector<pii> mst[N]; 
vector<pair<int, pii>> notmst; 
int par[N];
int done[N];
int up[N][25];
int maxval[N][25];
int he[N];


int lca(int a, int b){
    if(he[a] < he[b]) swap(a,b);

    int diff = he[a] - he[b];
    int cost = 0;

    for(int i=18; i>=0; i--){
        if(diff & (1 << i)){
            cost = max(cost, maxval[a][i]);
            a = up[a][i];
        }
    }

    if(a == b) return cost;

    for(int i=18; i>=0; i--){
        if(up[a][i] != up[b][i]){
            cost = max(cost, max(maxval[a][i], maxval[b][i]));
            a = up[a][i];
            b = up[b][i];
        }
    }
    cost = max(cost, max(maxval[a][0], maxval[b][0]));
    return cost;

}



void dfs(int start, int par){

    for(auto it : mst[start]){
        if(it.fi == par) continue;

        he[it.fi] = he[start] + 1;
        up[it.fi][0] = start;
        maxval[it.fi][0] = it.se;
        dfs(it.fi, start);
    }
}

int findpar(int a){
    if(par[a] == -1) return a;
    else return par[a] = findpar(par[a]);
}

bool uni(int a, int b){
    int x = findpar(a);
    int y = findpar(b);

    if(x == y) return false;

    par[y] = x;

    return true;
}


void solve(){
    int n, m;
    cin >> n >> m;

    for(int i=0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        adj.pb({c, {a,b}});
    }

    sort(adj.begin(), adj.end());

    for(int i=0; i <=n; i++){
        par[i] = -1;
    }

    int MST = 0;
    int start = 0;

    for(int i=0 ;i < m; i++){
        int w = adj[i].fi;
        int u = adj[i].se.fi;
        int v = adj[i].se.se;

        if(uni(u,v)){
            MST+=w;
            mst[u].pb({v,w});
            mst[v].pb({u,w});
            done[i] = 1;
            //cout << u  << " " << v << endl;

        }
        
    }
    he[1]= 1;
    up[1][0] = 1;
    dfs(1,0);

   

    for(int j = 1; j<= 18; j++){
        for(int i=1; i<=n; i++){
            int par = up[i][j-1];
            int par2 = maxval[i][j-1];

            up[i][j] = up[par][j-1];
            maxval[i][j] = max(par2, maxval[par][j-1]);
        }
    }
    // for(int i=1; i<=n; i++){
    //     cout << up[i][2] << " " << maxval[i][2]  << endl;
    // }
    //cout << MST << endl;
    int secMST = 1e10;

    for(int i=0; i < m; i++){
        if(done[i]) continue;

        int w = adj[i].fi;
        int u = adj[i].se.fi;
        int v = adj[i].se.se;

        //if(findpar(u) != findpar(v)) continue;

        int maxvallca = lca(u,v);
        int val = w- maxvallca;
        //int mstse = MST + val;
        //cout << mstse << endl;

        secMST = min(secMST, val);
        

        //cout << u <<" " << v  << " " << maxvallca << endl;
        //cout << secMST << endl;
    }

    cout << MST + secMST << endl;















}




signed main(){
   BOOST
   solve();
}

   
 