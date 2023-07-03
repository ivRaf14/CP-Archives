#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;
//int range 1e9
//ll range 10e18
//double > float
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}
 
 signed main(){
  Usaco("cowsignal");
  int row, col, scale;
  string per = "";

  cin >> row >> col >> scale;

  char arr[row][col];

  for(int i=0; i <row; i++){
    for(int j=0; j < col; j++){
      cin >> arr[i][j];

      for(int k=1; k <= scale; k++){
      cout << arr[i][j];
      per+=arr[i][j];
      }
      if(j == col-1) cout << endl;
    }
    for(int i = 1; i < scale; i++) cout << per << endl;
    per = "";

  }

  


}