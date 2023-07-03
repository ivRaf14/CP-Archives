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

int dist[100009];
bool visited[100009];
vector<int> adj[100009];
int n;
int res = 0;
int idx = 0;

void dfs(int start, int curnode, int jrk){
    visited[curnode] = 1;
    int cnt = 0;

    for(auto it : adj[curnode]){
        if(!visited[it]){
            cnt++;
            dfs(start, it, jrk + 1);
        }
    }

    if(cnt == 0){
        if(jrk > res){
            res = jrk;
            idx = curnode;
        }
    }


}

void solve(){
    cin >> n;
    

    for(int i=0; i < n-1; i++){
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }  

    dfs(1,1,0);
    
    //cout << has <<" ";
    res = 0;
    memset(visited, false, sizeof(visited));
    dfs(idx,idx, 0);
    //cout << res << " ";

    cout << res << endl;




}




signed main(){
   BOOST
   solve();
}

   
 
  