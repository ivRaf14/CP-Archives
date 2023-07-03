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
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}
 
 
signed main(){
  string s;
  cin >> s;
 
  for(int i=0; i < s.size(); i++){
    if(s[i] == '.') cout << 0;
    if(s[i] == '-'){
      if(s[i+1] == '.'){
        cout << 1;
        i++;
      }
      else if(s[i+1] == '-'){
        cout << 2;
        i++;
      }
    }
  }
  
 
  
 
}