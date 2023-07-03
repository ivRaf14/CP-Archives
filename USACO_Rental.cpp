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

int arr[100005];
int res[100005];
pii rent[100005];
int sell[100005];



void solve(){
  int n, m, k;
  cin >> n >> m >> k;
  

  for(int i=0;  i< n; i++){
    cin >> arr[i];
    
    //sell[i] = 0;
  }

  for(int i=0; i < m; i++){
    int a, b;
    cin >> a >> b;
    rent[i] = {b,a};
  }

  for(int i = m; i < n; i++) rent[i] = {0,0};

  for(int i=0 ; i < k; i++){
    cin >> sell[i];
  }

  for(int i = k; i < n; i++) sell[i] = 0;


  sort(arr, arr+n, greater<int>());
  sort(rent, rent+n, greater<pii>());
  sort(sell, sell+n);

  // for(int i=0; i < n; i++) cout << arr[i] << " ";
  //   cout << endl;
  // for(int i=0; i < n; i++) cout << rent[i].fi << " ";
  //   cout << endl;
  // for(int i=0; i < n; i++) cout << sell[i] << " ";

 

  int idx = 0;
int idxsell = 0;
  int ans = 0;

  for(int i=0; i < n; i++){
    

    while(idx < n && arr[i] > 0){
      int used = min(rent[idx].se, arr[i]);
      res[i]+= (used * rent[idx].fi);
      rent[idx].se -= used;
      arr[i] -= used;

      if(rent[idx].se <= 0){
        idx++;
      }
        // if(arr[i] < rent[idx].se){
        //     temp+= (arr[i] * rent[idx].fi);
            
        //     break;
        // }
        // else if(arr[i] > rent[idx].se){
        //     temp+= (rent[idx].se * rent[idx].fi);
        //     arr[i]-=(rent[idx].se);
        //     idx++;
        // }
        // else if(arr[i] == rent[idx].se){
        //     temp+= (rent[idx].se * rent[idx].fi);
        //     idx++;
        //     break;
        // }
    }
    //cout << temp << endl;
  }
  

  for(int i= n-1; i >=0; i--){
    //cout << res[i] << " " << sell[i] << endl;
    ans+= max(res[i], sell[i]);
  } 
  cout << ans << endl;
  


}

// 1,1
// 3,2
// 4,1
// 5,0
// 7,2
// 9,9


signed main(){
   BOOST
   Usaco("rental");
   solve();
}

   
 
  