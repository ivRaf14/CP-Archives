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



void solve(){
    int n; cin >> n;
    int arr[n][n];

    for(int i=0; i < n; i++){
        for(int j = 0; j <=i; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=1; i < n; i++){
        for(int j =0; j <=i; j++){
            int temp = INT_MIN;

            if(j > 0){
                temp = max(temp,arr[i-1][j-1]);
            }

            if(j < i){
                temp = max(temp,arr[i-1][j]);

            }

            arr[i][j] += temp;
        }
    }
    int res = -1e8;

    for(int i=0; i < n; i++){
        res = max(res, arr[n-1][i]);
    }
    cout << res << endl;



}




signed main(){
    BOOST
    Usaco("slalom");

   
   solve();
}

   
 
  