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

 
 
void solve(){
   int n;cin >> n;
   priority_queue<int> pq;

   while(n--){
      int a; cin >> a;
      if(a == 1){
         int b; cin >> b;
         pq.push(b);
      }
      else if(a == 2){
         if(!pq.empty()) cout << pq.top() << endl;
      }
      else{
         if(!pq.empty()) pq.pop();
      }
   }


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  