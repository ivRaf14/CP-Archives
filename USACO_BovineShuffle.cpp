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
  Usaco("shuffle");
  
 int n; cin >> n;
 vector<int> arr(n);
 vector<int> idx(n);
 vector<int> res(n);
 for(int i=0; i < n; i++){
  cin >> idx[i];
 }
 for(int i=0; i < n; i++){
  cin >> arr[i];
 }

int rep = 3;
while(rep--){
 for(int i=0; i <n; i++){
  for(int j=0; j < n; j++){
    if(i == idx[j]-1){
      res[j] = arr[i];
    }
  }
 }
arr.clear();
arr.assign(res.begin(), res.end());
}
for(int i=0; i < n; i++){
  cout << res[i] << endl;
}


}