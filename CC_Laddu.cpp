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
   int n; cin >> n;
   string s; cin >> s;
   int res = 0;
   while(n--){
      int val;
      string ipt; cin >> ipt;

      if(ipt == "CONTEST_WON"){
         cin >> val;
         res+= (300 + 20 - min(20,val));
      }
      else if(ipt == "TOP_CONTRIBUTOR") res+=300;
      else if(ipt == "BUG_FOUND"){
         cin >> val;
         res+=val;
      }
      else{
         res+=50;
      }
   }
   if(s == "INDIAN"){
      cout << res / 200 << endl;
   }
   else cout << res / 400 << endl;
}


 
 
signed main(){
   int n; cin >> n;
   while(n--){
      solve();
   }

}
   
 
  