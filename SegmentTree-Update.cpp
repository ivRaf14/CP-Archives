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
 
int getsum(int index, int left, int right, int quleft, int quright){
   if(right < quleft || left > quright) return 0; 
   else if(quleft <= left && quright >= right){
      return tree[index];
   }

   int mid = (left + right) / 2;
   return getsum(2 * index, left, mid, quleft, quright)+
          getsum(2 * index + 1, mid+1, right ,quleft, quright);
}

void update(int u, int v){
   tree[u] = v;
   for(int i = u/2; i >=1; i/=2){
      tree[i] = tree[2*i] + tree[2*i + 1];
   }
}
 
void solve(){
   int n, m;
   cin >> n >> m;
   vector<int> a(n);
   for(int i=0; i< n; i++){
      cin >> a[i];
   }

   while(__builtin_popcount(n) != 1){
      a.pb(0);
      n++;
   }

   tree.resize(2 * n);

   for(int i= 0; i < n; i++){
      tree[n+i] = a[i];
   }  

   for(int i= n-1; i >= 1; i--){
      tree[i] = tree[2*i] + tree[2*i + 1];
   }

  //cout << "fffff ";
   // for(int i=1; i < tree.size(); i++){
   //    cout << tree[i] << " ";
   // }

   while(m--){
      int a, b, c;
      cin >> a >> b >> c;
      b--;
      c--;
      if(a == 2){
         int res = getsum(1, 0, n-1, b, c);
         cout << res << endl;
      }
      else{
         update(n+b,c+1);
      }
   }


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  