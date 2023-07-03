#include <bits/stdc++.h>
#define int long long
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

struct Elem
 {
    int st, ed, val;
 }; 

bool cmp(Elem a, Elem b){
   return a.ed < b.ed;
}
 
void solve(){
   int n; cin >> n;
   Elem arr[n];
   int dp[n];
   for(int i=0; i < n; i++){
      cin >> arr[i].st  >> arr[i].val;
      int x; cin >> x;
       arr[i].ed = arr[i].st + x;

   }

   sort(arr, arr+n, cmp);
   dp[0] =arr[0].val;

   for(int i=1; i < n; i++){
      int temp = -1;
      int l = 0;
      int r = i;
      while(l <=r){
        int mid = (l+r) / 2;
        if(arr[mid].ed <= arr[i].st){
          if(arr[mid+1].ed <= arr[i].st){
            l = mid + 1;
          }
          else{
            temp = mid;
            break;
          }
        }
        else r = mid - 1;
      }
      int value = arr[i].val;
      if(temp != -1){
        value+=dp[temp];
      }
      dp[i] = max(dp[i-1], value);




   }
   cout << dp[n-1] << endl;


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  