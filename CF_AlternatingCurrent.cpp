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
// O(n) -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}
 
 
void solve(int n){
   

}
 
 
signed main(){
  
  string s; cin >> s;

  stack<char>st;

  for(int i=0;i < s.size(); i++){
   if(st.empty())st.push(s[i]);
   else if(st.top() != s[i]) st.push(s[i]);
   else st.pop();

  }

  cout << (st.empty() ? "Yes" : "No") << endl;
}
   
 
  