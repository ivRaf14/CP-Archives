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

 
 
void solve(){
   int n; cin >> n;
   pair<int,int> arr[n];

   for(int i=0; i < n; i++){
      cin >> arr[i].fi;
      arr[i].se = i;
   }
   sort(arr, arr+n);

   int cnt = 0;

   for(int i=0; i < n; i++){
      if(i == arr[i].se) continue;
      //cout << arr[i].fi <<" "<< arr[arr[i].se].fi;
      swap(arr[i], arr[arr[i].se]);
      

      if(i != arr[i].se) i--;
      cnt++;
   }
   cout << cnt << endl;


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  