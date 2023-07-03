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

void rec(int n, char from, char to , char help){
   if(n == 0) return;

   rec(n-1, from, help, to);
   cout << n << " " << from << " " << to << endl;

   rec(n-1, help, to, from);
}
 
 
void solve(){
   int n; cin >> n;
   rec(n, 'A', 'C', 'B');


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  