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
 
 
void solve(){
   
}
 
 
int main(){
 
  stack <char> st;
 
  string s,u;
 
  cin >> s;
 
 
 
  vector <int> mask(26,0) ;
 
  for(int i = 0; i < s.size(); i++){
    mask[s[i] - 'a']++;
  } 
 
  for(auto c: s){
 
    bool flag = false;
 
    char idx = c;
 
    st.push(c);
 
    mask[c-'a']--;
 
    while(1){
 
      flag = false;
      
      for(int i = 0; i < idx-'a'; i++){
        if(mask[i] > 0) flag = true;
      }       
 
      if(!flag){
 
        u += idx;
        
        st.pop();
 
        if(st.empty()){
          break;
        }
 
        idx = st.top();
 
      }
 
      else{
        break;
      }
 
    }
  }
 
  while(!st.empty()){
    u += st.top();
    st.pop();
  }
 
  cout << u << endl;
 
  return 0;
}

   
 
  