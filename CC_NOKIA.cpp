#include <bits/stdc++.h>
#define ll long long
#define int unsigned long long
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
int mini = 0;

void dist(int left, int right){
   if(right - left <= 1) return;
   
   int pos = (left + right)/2;
   mini += (pos - left) + (right - pos);
   dist(left,pos);
   dist(pos, right);
   
}
 
 
void solve(){
   int n, m;
   cin >> n >> m;
   int maxi = (n + 1) * (n + 2) / 2;
   maxi--;
   dist(0,n+1);
    //cout << mini  << " " << maxi << endl;
   // mini = 0;

   if(m < mini) cout << -1;
   else if(m >= mini && m <= maxi) cout << 0;
   else cout << m - maxi;
   cout << endl;
   mini = 0;


}


 
 
signed main(){
   int n; cin >> n;
   while(n--){
      solve();
   }

}
   
 
  