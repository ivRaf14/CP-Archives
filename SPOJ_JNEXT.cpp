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
   int arr[n];

   for(int i=0; i < n; i++){
      cin >> arr[i];
   }
   bool can = next_permutation(arr, arr+n);

   if(can){
         for(int i=0; i < n; i++){
         cout << arr[i];
      }
      cout << endl;
   }
   else cout << -1 << endl;

}


signed main(){
   BOOST
   
   int n; cin >> n;
   while(n--){
      solve();
   }




  
  

  

}

   
  



