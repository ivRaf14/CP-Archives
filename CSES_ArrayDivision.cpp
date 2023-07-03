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


int n, k;
int arr[200005];

bool good(int x){
   int cnt = 0;
   int temp = 0;

   for(int i = 0; i < n; i++){
      if(arr[i] > x) return false;
      
      temp+=arr[i];
      if(temp > x){
         cnt++;
         temp = arr[i];
      }
   }

   return cnt <= k-1;
}

void solve(){
   
   cin >> n >> k;
  

   for(int i=0; i < n; i++) cin >> arr[i];

   int l = 0;
   int r = LLONG_MAX;

   // for(int i=0; i <= 50; i++){
   //    cout << i << " " << good(i) << endl;
   // }

   while(l + 1 < r){
      int mid = (l + r) / 2;

      if(good(mid)) r = mid;
      else l = mid;
   }

    cout << r << endl;




}




signed main(){
   BOOST
   solve();
}

   
 
  