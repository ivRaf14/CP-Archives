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
vector<pii> tree;

pii query(int index, int l, int r, int ql, int qr){
   if(l > qr || r < ql) return {1e10, 1e10};
   else if(ql <= l && r <= qr) return {tree[index].fi, tree[index].se};
   int mid = (l + r) / 2;

   return min(query(2 * index, l, mid, ql, qr), query(2 * index + 1, mid + 1, r, ql, qr));
}



void solve(){
   int n; cin >> n;
   int len = n;
   //map<int,int> idx;
   pii arr[n];

   for(int i=0; i < n; i++){
      cin >> arr[i].fi;
      arr[i].se = i;
   }

   while(__builtin_popcount(n) != 1){
      n++;
   }
   tree.resize(2 * n);

   for(int i=0; i<2 * n; i++){
      tree[i].fi = 1e10;
   }

   for(int i=0; i < len; i++){
      tree[n + i] = arr[i];
      tree[n+i].se = arr[i].se;
   }

   for(int i= n-1; i > 0; i--){
      tree[i].fi = min(tree[2 * i].fi, tree[2 * i + 1].fi);
      if(tree[i].fi == tree[2 * i].fi) tree[i].se = tree[2 * i].se;
      else tree[i].se = tree[2 * i + 1].se;
   }

   // for(int i=1; i<2 * n; i++){
   //    cout << tree[i] <<    " ";
   // }


   for(int i=0; i < len;i++){
      pii res = query(1, 0 , n-1, i+1, n-1);
      cout << res.fi << " " << res.se << endl;
      //cout << res << " " << idx[res] << endl;
      if( arr[i].fi > res.fi ) cout << res.se - i -1;
      else cout << -1;
      cout << " ";
   }







}




signed main(){
   BOOST
   
   cout << "fsfsffs";
}

   
 
  
