#include <bits/stdc++.h>
#define int long long
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

vector<int> tree;

int sumquery(int index, int left, int right, int query_left, int query_right){
   if(query_left > right || query_right < left){
      return 0;
   }
    if(query_left <= left && right <= query_right){
      return tree[index];
   }

   int mid = (left+right) / 2;
   return sumquery(2 * index, left, mid, query_left, query_right)+ sumquery(2 * index+1, mid+1, right, query_left, query_right);
}
 
 
void solve(){
   int n, m;
   cin >> n >> m;
   vector<int>arr;

   for(int i=0;i < n; i++){
      int a; cin >> a;
      arr.pb(a);
   }

   while(__builtin_popcount(n) != 1){
      arr.pb(0);
      n++;
   }

   tree.resize(2 * n);

   for(int i=0; i < n; i++){
      tree[n + i] = arr[i];
   }
   
   // build
   for(int i = n-1; i >=1; i--){
      tree[i] = tree[2*i] + tree[2 * i + 1];
   }
   
   // cout << endl;
   // for(int i=1; i< tree.size(); i++){
   //    cout << tree[i] << " ";
   // }

   while(m--){
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      cout << sumquery(1, 0, n-1, a, b) << endl;

   }


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  