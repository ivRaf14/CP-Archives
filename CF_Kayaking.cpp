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

int n;
int arr[1000];



void solve(){
   int n; cin >> n;
   int arr[2 * n];

   for(int i=0; i< 2 * n; i++){
      cin >> arr[i];
   }

   sort(arr, arr + (2*n));
   int ans = INT_MAX;

   for(int i=0; i < 2*n; i++){
      for(int j = i+1; j < 2*n; j++){
         int prev = -1;
         int tot = 0;

         for(int k = 0; k < 2*n; k++){
            
            if(k == i || k == j) continue;

            if(prev == -1) prev = arr[k];
            else{
               tot+= abs(arr[k] - prev);
               prev = -1;
            }
         }

         ans = min(ans,tot);
      }
   }

   cout << ans << endl;
   






}






signed main(){
   BOOST
   //Usaco("citystate");
    solve();
   
   
}

   
 
  