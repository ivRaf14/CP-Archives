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
int n, m;
int par[100009];

int findpar(int a){
   if(par[a] == -1) return a;
   else return par[a] = findpar(par[a]);
}

void add(int b, int c){
  

   int x = findpar(b);
   int y = findpar(c);
    if(x > y){
      swap(x,y);
   }

   if(x != y){
      par[x] = y;
   }
   
}

void check(int b, int c){
   int x = findpar(b);
   int y = findpar(c);

   if(x == y) cout << 'Y';
   else cout << 'T';
   cout << endl;
}
 
 
void solve(){
   cin >> n>> m;
   for(int i=1; i<= n; i++){
      par[i] = -1;
   }

   while(m--){
      int a, b, c;
      cin >> a >> b >> c;
      if(a == 1){
         add(b, c);
      }
      else check(b,c);
   }


}


 
 
signed main(){
   BOOST
   solve();
}