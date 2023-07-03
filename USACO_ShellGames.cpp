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
  BOOST
  Usaco("shell");
  int n; cin >> n;
  bool arr[n];
  int data1[n];
  int data2[n];
  int choose[n];
  int res = 0;

  for(int i=0; i <n; i++){
    cin >> data1[i] >> data2[i] >> choose[i];
  }

  for(int i=0; i < n; i++){
    memset(arr, false, sizeof(arr));
    arr[i] = true;
    int cnt = 0;

    for(int j=0; j <n; j++){
      swap(arr[data1[j] -1], arr[data2[j] - 1]);
      if(arr[choose[j]-1] == true) cnt++;
    }
    res = max(res, cnt);
  }
  cout << res << endl;
  


}