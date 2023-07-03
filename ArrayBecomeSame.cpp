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

int times[1005];


void solve(){
 int n; cin >> n;
 int arr[n];
 int sum = 0;

for(int i=0; i < n; i++){
  cin>> arr[i];
  sum+=arr[i];
}

for(int i = n; i >=0; i--){
  if(sum % i == 0){
    int curr = 0;

    for(int j =0; j < n; j++){
      curr+=arr[j];
      if(curr == sum / i) curr = 0;
    }

    if(curr == 0){
      cout << n-i << endl;
      break;
    }
  }
}

}






signed main(){
   BOOST
   //Usaco("circlecross");
   int q; cin >> q;
   while(q--){
    solve();
   }
   
}

   
 
  