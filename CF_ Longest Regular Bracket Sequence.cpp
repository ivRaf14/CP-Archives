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

  stack<int>st;
  int ans = 0;
  int res = 0;
  int cnt = 1;
  st.push(-1);

  for(int i=0; i < s.size(); i++){

   if(s[i] == '(') st.push(i);
   else{
      st.pop();

      if(st.size() > 0){
         

         if(ans < i - st.top()){
            ans = i - st.top();
            cnt = 1;
         }
         else if(ans == i - st.top())cnt++;
      }
      else{
         st.push(i);
      }
   }

  }
  //cout << "ffff" << res << endl;

  cout << ans << " " << cnt << endl;
}
   
 
  