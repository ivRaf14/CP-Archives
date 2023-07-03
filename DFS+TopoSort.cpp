#include <bits/stdc++.h>
#define int long long
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

vector<pair<int,int>> adj[100009];
int dist[100009];
int visited[100009];
int n, m;
stack<int> st;

void dfs(int start){
	visited[start] = 1;
	

	for(auto it : adj[start]){
		if(!visited[it.fi]){
			//dist[it.fi] = max(dist[it.fi], dist[start] + it.se);
			dfs(it.fi);
		}
	}
	st.push(start);
	
}



void solve(){
	
	cin >> n>> m;
	for(int i=0; i <= n; i++){
		dist[i] = INT_MIN;
	}
	dist[1] = 0;

	for(int i=0,a,b,c; i < m; i++){
		cin >> a >> b >> c;
		adj[a].pb({b,c});
	}
	dfs(1);

	while(!st.empty()){
		int start = st.top();
		for(auto it : adj[start]){
			dist[it.fi] = max(dist[it.fi], dist[start] + it.se);
		}
		st.pop();
	}

	if(dist[n] == INT_MIN) dist[n] = -1;
	cout << dist[n] << endl;










}




signed main(){
	BOOST
	solve();
}


