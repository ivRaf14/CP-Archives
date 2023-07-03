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

int query(int index, int le, int ri, int qle, int qri){
   //cout << le << " " << ri << endl;
   if(qle > ri || qri < le ) return 0;
   else if(qle <= le && qri >= ri){
      return tree[index];
   }
   int mid = (le + ri) / 2;
   return query(2*index, le, mid, qle, qri)+ query(2*index +1, mid+1, ri, qle, qri);
}

void update(int index, int le, int ri, int indexupdate){
   if(le == ri && le == indexupdate){
      tree[index]++;
      return;
   }
   else if(indexupdate < le || indexupdate > ri ) return;
   

   int mid = (le + ri) / 2;
   update(2*index, le, mid, indexupdate);
   update(2*index+1, mid+1, ri, indexupdate);

   tree[index] = tree[2*index] + tree[2*index + 1];
}


 
void solve(){
   int n; cin >> n;
   int temp = n;
   pair<int,int> arr[n];

   for(int i=0; i < n; i++){
      cin >> arr[i].fi;
      arr[i].se = i;
      
   }

   while(__builtin_popcount(temp) != 1){

      temp++;
   }

   tree.resize(2* temp, 0);

   sort(arr, arr+n, greater<pair<int,int>>());
   //cout << query(1,0 ,temp-1, 0 ,2);
   int ans = 0;
   for(int i=0; i < n; i++){
      ans+= query(1, 0, temp-1, 0, arr[i].se);
      update(1, 0, temp-1, arr[i].se);
   }
   cout << ans << endl;


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  