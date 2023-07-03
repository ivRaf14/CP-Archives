#include <bits/stdc++.h>
#define int long long
//#define mp make_pair
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








void solve(){
   int n, k, b;
   cin >> n >> k >> b;
   int arr[n];
   int cnt = b;

   for(int i=0; i < n; i++) arr[i] = 0;

   for(int i=0;  i< b; i++){
      int a; cin >> a;
      a--;
      arr[a] = 1;
   }

  for(int i= 1; i < n; i++){
   arr[i] += arr[i-1];
   //cout << arr[i] << endl;
  }

  int ans = b;

  for(int i = k-1; i < n; i++){
   ans = min(ans, arr[i] - arr[i-(k-1)]);
   //cout << i << " " << arr[i] << ans << " ";
  }
  cout << ans << endl;

   






   











   




   


}






signed main(){
   BOOST
   Usaco("maxcross");
   solve();
   
   
}

   
 
  