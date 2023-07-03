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

map<string,vector<string>>adj; 
map<string,int>depth;
map<string,string>parent;

void dfs(string node, map<string,int>&ting, bool pros){
   for(auto v : adj[node]){
      ting[v] = ting[node] + 1;
      if(pros == 1) parent[v] = node;
      dfs(v,ting,pros);
   }
}

string find_lca(string a, string b){
   int depa = depth[a];
   int depb = depth[b];

   while(depa != depb){
      if(depa > depb){
         a = parent[a];
         depa = depth[a];
      }
      else{
         b = parent[b];
         depb = depth[b];
      }
   }

   while(a != b){
      a = parent[a];
      b = parent[b];
   }

   return a;  
}


void solve(){
 int n; cin >> n;
 string a, b;
 string c, d;
 cin >> a >> b;
 set<string>st;

 st.insert(a);
 st.insert(b);


 string top = "";

 for(int i=0; i < n; i++){
   int cnt = 0;   
   cin >> c >> d;
   adj[c].pb(d);

   st.insert(c);
   st.insert(d);

 }
 int maximum = -1;

 for(auto it : st){
   map<string,int>lang = {};

   dfs(it,lang,0);
   //cout << it << " ";

   // for(auto cc : lang){
   //    cout << cc.fi << " " << cc.se << " ";
   // }
   // cout << lang.size() << "ffsfsfsf";

   if((int)lang.size() > maximum){
      top = it;
      maximum = lang.size();
   
   }

  
 }


 dfs(top, depth,1);

 // for(auto it : depth){
 //   cout << it.fi << " " << it.se << endl;
 // }

 string lca = find_lca(a,b);

 //cout << lca << "fsffs" << endl;
 
 

if(lca == "") cout << "NOT RELATED";
else if(lca == parent[a] && lca == parent[b]) cout << "SIBLINGS" << endl;

else if(lca == a){
   string ans = "";
   if(abs(depth[b] - depth[a]) > 1){
      for(int i=2; i <abs(depth[b] - depth[a]); i++) ans+="great-";ans+="grand-";
   }

   

  cout << a << " is the " << ans << "mother" << " of " << b << endl;
}  
else if(lca == b){
   string ans = "";
   if(abs(depth[b] - depth[a]) > 1){
      for(int i=2; i <abs(depth[b] - depth[a]); i++) ans+="great-";ans+="grand-";
   }
  cout << b << " is the " << ans << "mother" << " of " << a << endl;
}

else if(lca == parent[a]){
   string temp = "";
   for(int i = 1; i < abs(depth[b] - depth[a]); i++){
     temp+="great-";
   } 

   cout << a << " is the " << temp << "aunt" << " of " << b << endl;
} 
else if(lca == parent[b]){
   string temp = "";
   for(int i = 1; i < abs(depth[b] - depth[a]); i++){
     temp+="great-";
   } 

   cout << b << " is the " << temp << "aunt" << " of " << a << endl;
}


else{
   cout << "COUSINS" << endl;
}  






   




   
   


     











}






signed main(){
   BOOST
   Usaco("family");
   solve();
   
   
}

   
 
  