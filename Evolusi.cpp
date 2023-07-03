#include <bits/stdc++.h>
#define ll long long
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

map<string, vector<string> > adj;
vector<string> res;


bool dfs(string start, string target, map<string, bool>& visited){
  stack<string> st;
  
  st.push(start);
  res.pb(start);
  
  while(!st.empty()){

    string temp = st.top();
    visited[temp] = true;

    st.pop();

    for(auto it : adj[temp]){
      if(!visited[it]){
        res.pb(it);
        if(it == target){
          return true;
        }
        st.push(it);
      }
    }

  }
  return false;
}
 
 
void solve(){
   int n, m;
   cin >> n >> m;
   
   map<string, bool> visited1, visited2;
   
   while(m--){
    string a, b;
    cin >> a >> b;
    adj[b].pb(a);
    visited1[b] = false;
    visited1[a] = false;
    visited2[b] = false;
    visited2[a] = false;
   }

   string start, tar;
   cin >> start >> tar;

  bool is = false;
  is = dfs(start,tar, visited1);

  if(!is){
    res.clear();
    is = dfs(tar, start, visited2);
  }

  if(!is) cout << "TIDAK MUNGKIN";
  else{
    reverse(res.begin(), res.end());
    for(auto it : res) cout << it << endl;
  }
 


   
   


}


 
 
signed main(){
   BOOST
   solve();
}
   