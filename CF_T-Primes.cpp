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

bool arr[SS];

void check(){

   arr[0] = arr[1] = true;
 
   for(int i = 2; i <= sqrt(SS); i++){
      if(!arr[i]){
         for(int j = i * i; j <= SS; j+=i){
            arr[j] = true;
         }
      }
   }
   
}

signed main(){
   BOOST
   check();

   int n; cin >> n;
   while(n--){
      ll a; cin >> a;

      double sq = sqrt(a);
      int m = sq;

      if(m == sq){
         if(!arr[m]) cout << "YES" << endl;
         else cout << "NO" << endl;
      }
      else cout << "NO" << endl;
   }




  
  

  

}

   
  



