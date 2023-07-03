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

vector<int> tree, lazy;


int query(int index, int l, int r, int ql, int qr){
   if(lazy[index] != 0){
      tree[index] += lazy[index];

      if(l != r){
         lazy[2 * index] += lazy[index];
         lazy[2 * index + 1] += lazy[index];
      }
      lazy[index] = 0;
   }

   if(r  < ql || l > qr) return 0;
   else if(ql <= l && r <= qr) return tree[index];

   int mid = (l + r) / 2;
   return max(query(2 * index, l , mid, ql, qr), query(2 * index + 1, mid + 1, r, ql, qr));
}

void update(int index, int l, int r, int ql, int qr, int val){
   if(lazy[index] != 0){
      tree[index]+= lazy[index];

      if(l != r){
         lazy[2 * index] += lazy[index];
         lazy[2 * index + 1] += lazy[index];
      }
      lazy[index] = 0;
   }

   if(r  < ql || l > qr) return;

   else if(ql <= l && r <= qr){
      tree[index] += val;

      if(l != r){
         lazy[2 * index] +=val;
         lazy[2 * index + 1] +=val;
      }

      return;
   }

   int mid = (l + r) / 2;
   update(2 * index, l, mid, ql, qr, val);
   update(2 * index + 1, mid +1, r, ql, qr, val);

   tree[index] = max(tree[2 * index], tree[2 * index + 1]); 
}

void solve(){
   int n, q;
   cin >> n >> q;
   int len = n;
   int arr[n];

   for(int i=0; i < n; i++){
      cin >> arr[i];
   }

   while(__builtin_popcount(n) != 1) n++;

   tree.resize(2 * n);
   lazy.resize(2 * n);

   for(int i=0; i < len; i++){
      tree[i + n] = arr[i];
   }

   while(q--){
      int a, b, c;
      cin >> a;
      if(a == 1){
         cin >> b >> c;
         b--;
         c--;
         int val; cin >> val;
         update(1, 0, n-1, b, c, val);
      }
      else{
         cin >> b;
         cout << query(1, 0, n-1, b-1, b-1) << endl;
      }
   }

   // 



}




signed main(){
   BOOST
   solve();
}

   
 
  