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
  int n; cin >> n;
  int t1, t2, t3;
  t1 = t2 = t3 = 0;
 
  while(n--){
    int a, b, c;
    cin >> a >> b >> c;
    t1+=a;
    t2+=b;
    t3+=c;
  }
  if(!t2 && !t1 && !t3) cout << "YES" << endl;
  else cout << "NO" << endl;
 
  
 
}