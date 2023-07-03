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

bool valid(int i, int j){
    return(i >= 0 && i < 8 && j>=0 && j < 8);
}



void solve(){
    int arr[8][8];
    int dp[8][8];
    for(int i=0; i < 8; i++){
        for(int j=0; j < 8; j++){
            cin >> arr[i][j];
        }
    }




    for(int i=7; i >= 0; i--){
        for(int j=0; j < 8; j++){
            int temp = 1e12;
            if(i == 7 && j == 0) continue;

            if(valid(i, j-1)) temp = min(temp, arr[i][j-1]);
            if(valid(i+1, j)) temp = min(temp, arr[i+1][j]);
            if(valid(i+1, j-1)) temp = min(temp, arr[i+1][j-1]);

            arr[i][j]+=temp;
        }
    }

    // for(int i=0; i < 8; i++){
    //     for(int j=0; j < 8; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << arr[0][7] << endl;



}




signed main(){
    Usaco("king2");
   BOOST
   solve();
}

   
 
  