#include <bits/stdc++.h>
#define ll long long
//#define mp make_pair
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
 
// void Usaco(string s) { 
//   freopen((s+".in").c_str(),"r",stdin);
//   freopen((s+".out").c_str(),"w",stdout);
// }

vector<int>tree;

int qq = 0;
 
int getmin(int index, int le, int ri, int qle, int qri){
   if(qle > ri || qri < le) return INT_MAX;
   else if(le >= qle && ri <= qri){
      // qle - le - ri - qri
      return tree[index];
   }
   int mid = (le + ri) / 2;

   return min(getmin( 2 * index, le, mid, qle, qri), getmin(2 * index + 1, mid+1, ri, qle, qri));

} 
void solve(){
   int n;
   cin >> n;
   vector<int> vec(n);
   map<int,int>mp;

   for(int i=0; i < n; i++){
      cin >> vec[i];
      mp[vec[i]] = i;
   }

   while(__builtin_popcount(n) != 1){
      vec.pb(INT_MAX);
      n++;
   }
   tree.resize(2 * n);

   for(int i=0; i < n; i++){
      tree[n+i] = vec[i];
   }
   for(int i = n-1; i>= 1; i--){
      tree[i] = min(tree[2 * i], tree[2 * i + 1]);
   }

   // for(int i=1; i< tree.size(); i++){
   //    cout << tree[i] << " ";
   // }
   int m; cin >> m;

   for(int i = 1; i<=m; i++){
      int a, b;
      cin >> a >> b;
      int ans = getmin(1, 0, n-1, a, b);
      cout <<"Teman #" << i << ": "<< mp[ans] << endl;
      //cout <<"Teman #" << i << ": " << mp[ans] << endl;
   }


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  