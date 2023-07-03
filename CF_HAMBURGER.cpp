#include <bits/stdc++.h>
#define int long long
#define mp make_pair
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

int arr[3] = {0,0,0};
int na,nb,nc;
int pa,pb,pc;
int m;

bool good(int x){
   int a = max(0LL, x * arr[0] - na);
   int b = max(0LL, x * arr[1] - nb);
   int c = max(0LL,x * arr[2] - nc);

   int res = a * pa + b * pb + c * pc;

   return res <= m;

}

void solve(){
   string s; cin >> s;
   
   cin >> na >> nb >> nc;

   
   cin >> pa >> pb >> pc;

   cin >> m;

   for(auto c : s){
      if(c == 'B') arr[0]++;
      if(c == 'S') arr[1]++;
      if(c == 'C') arr[2]++;
   }

   int l = 0;
   int r = 1e13;

   // for(int i=0; i <= 50; i++){
   //    cout << i << " " << good(i) << endl;
   // }

   while(l + 1 < r){
      int mid = (l + r) / 2;

      if(good(mid)) l = mid;
      else r = mid;
   }
   cout << l << endl;



}




signed main(){
   BOOST
   solve();
}

   
