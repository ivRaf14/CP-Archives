#include <bits/stdc++.h>
#define ll long long
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

vector<pii> arr;
int k , d, n;

pair<bool, vector<vector<int>>> good(int x){
   vector<vector<int>> pros(k);
   int idx = 0;

   for(int days = 1; days <= k; days++){

      for(int j = 1; j<= x; j++){
         if(arr[idx].fi > days) break;

         if(arr[idx].fi + d >= days){
            pros[days-1].pb( arr[idx].se);
            idx++;
         }
         else return {false, pros};

         if(idx == n) return {true, pros};
      }
   }
   return {false, pros};
}

void solve(){
   cin >> k >> d >> n;
   
   arr.resize(n);

   for(int i=0; i < n; i++){
      int ipt; cin >> ipt;

      arr[i] = {ipt, i+1};
   }

   // 
   

   sort(arr.begin(), arr.end());

   // for(int i=0; i < n; i++){
   //    cout << i << " " << arr[i].fi << endl;
   //    //arr[i].se = i + 1;
   // }
   //cout  << good(arr, 2 , k , d,n);

   
   int l = 1;
   int r = n;

   int per = 0;
   vector<vector<int>> ked;

   while(l < r){
      int mid = (l + r) / 2;

      pair<bool, vector<vector<int>>> res = good(mid);
      if(res.fi == true){
         per = mid;
         ked = res.se;
         r = mid;
      }
      else l = mid+1;
   }

  cout << l << endl;

  for(int i = 0; i < k; i++){
   for(auto v  : ked[i]){
      cout << v << " ";
   }
   cout << 0 << endl;
  }





}




signed main(){
   BOOST
   solve();
}

   
 
  