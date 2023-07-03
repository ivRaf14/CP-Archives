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

int kadane(vector<int> num){
   int maxsum = num[0];

   for(int i=1; i < num.size(); i++){
      num[i] = max(num[i] + num[i-1], num[i]);
      maxsum = max(maxsum, num[i]);
   }
   return maxsum;
}
 
 
void solve(){
   int n, m;
   cin >> n >> m;
   int arr[n][m];
   // vector<int> temp (n);

   // for(int i=0; i < m; i++){
   //    temp.pb(0);
   // }

   for(int i=0; i < n; i++){
      for(int j=0; j < m; j++){
         cin >> arr[i][j];
      }
   }

   
   int ans = INT_MIN;

   for(int i =0; i < m; i++){
      vector<int> temp;

      for(int j=i; j < m; j++){
         if(i == j){
            for(int k=0; k < n; k++){
               temp.pb(arr[k][j]);
            }
         }
         else{
            for(int k=0; k < n; k++){
               temp[k] += (arr[k][j]);
            }
         }

         int res = kadane(temp);
         ans = max(res, ans);
      }
   }
   cout << ans << endl;


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  