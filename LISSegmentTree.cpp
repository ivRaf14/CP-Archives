#include <bits/stdc++.h>
#define ll long long
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


vector<int> tree;



int query(int index, int l, int r, int ql, int qr){
   if(r  < ql || l > qr) return 0;
   else if(ql <= l && r <= qr) return tree[index];

   int mid = (l + r) / 2;
   return max(query(2 * index, l , mid, ql, qr), query(2 * index + 1, mid + 1, r, ql, qr));
}

void update(int index, int l, int r, int ql, int qr, int val){
   if(r  < ql || l > qr) return;
   else if(ql <= l && r <= qr){
      tree[index] = val;
      return;
   }

   int mid = (l + r) / 2;
   update(2 * index, l, mid, ql, qr, val);
   update(2 * index + 1, mid +1, r, ql, qr, val);

   tree[index] = max(tree[2 * index], tree[2 * index + 1]); 
}

bool cmp(pii a, pii b){
   if(a.fi == b.fi) return a.se > b.se;
   return a.fi > b.fi;
}


void solve(){
   int n; cin >> n;
   pii arr[n];
   int len = n;

   for(int i=0; i < n; i++){
      cin >> arr[i].fi;
      arr[i].se = i;
   }

   sort(arr, arr+n, cmp);

   while(__builtin_popcount(n) != 1) n++;
   tree.resize(2 * n);

   

   for(int i=0; i < len; i++){
      int findmax = query(1, 0, n-1, 0, arr[i].se) + 1;
      //cout << findmax << endl;
      update(1, 0, n-1, arr[i].se, arr[i].se, findmax);
   }

   cout << tree[1] << endl;






}




signed main(){
   BOOST
   solve();
}

   
 
  