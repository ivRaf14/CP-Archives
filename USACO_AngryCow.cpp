#include <bits/stdc++.h>
//#define int long long
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

int n;
int arr[1000];

int get(int start, int dir){
   int prev = start;
   int rad = 1;

   while(1){
      int next = prev;
      while(next + dir >=0 && next+dir < n && abs(arr[next + dir] - arr[prev]) <= rad) next+=dir;

      if(next == prev){
         break;
      }

      prev = next;
      rad++;
   }

   return abs(prev - start);
}




void solve(){
   cin >> n;
   
   for(int i=0; i< n; i++) cin >> arr[i];
   sort(arr,arr+n);

   int ans = 0;

   for(int i=0; i < n; i++){
      ans = max(ans, get(i,-1) + get(i,1) + 1);
   }
   cout << ans << endl;
  




   






}






signed main(){
   BOOST
   //Usaco("angry");
   solve();
   
   
}

   
 
  