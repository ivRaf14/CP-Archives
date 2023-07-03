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
    int n, m , q;
    cin >> n >> m >> q;
    int arr[n+1][n+1];
    int path[n+1][n+1];

    for(int i=0; i <= n; i++){
        for(int j=0; j<=n; j++){
            if(i == j){
                arr[i][j] = 0;
                continue;
            }
            arr[i][j] = 1e11;
        }
    }

    for(int i=0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        arr[a][b] = c;
        arr[b][a] = c;
    }

    for(int i=0; i <= n; i++){
        for(int j=0; j<=n; j++){
            if(arr[i][j] != 1e11){
                path[i][j] = j;
            }
        }
    }

    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j = 1; j <=n; j++){
                if(arr[i][j] > arr[i][k] + arr[k][j]){
                    arr[i][j] = arr[i][k] + arr[k][j];
                    path[i][j] = path[i][k];
                }
            }
        }
    }

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout << path[i][j] <<" ";
    //     }
    //     cout << endl;
    // }

    while(q--){
        int a, b;
        cin >> a >> b;

        if(path[a][b] == b){
            cout << a << " " << b << endl;
            //cout << "fssfsfsf";
        }
        else{
            cout << a << " ";
            int to = path[a][b];
            while(to != b){
                cout << to << " ";
                to = path[to][b];

            }
            cout << b << endl;
        }
    }



}




signed main(){
   BOOST
   solve();
}

   
 
  