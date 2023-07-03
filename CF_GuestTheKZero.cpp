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

int respon(int st, int en){
      cout << "? " << st << " " << en << endl;
      int ipt; cin >> ipt;

      // if(ipt == 0 && st == en){
      //    cout << "! " << st << endl;
      //    exit(0);
      // }
      return (en - st + 1) - ipt;
}

// 1 1 0 1 1

void solve(){
      int n, t, k;
      cin >> n >> t >> k;

      int l = 1;
      int r = n;

      while(l < r){
         int mid = (l + r) / 2;
         int per = respon(l , mid);

         if(k <= per){
            r = mid;
         }
         else{
            l = mid + 1;
            k = k - per;
         }
        

        

      }
      cout << "! " << l << endl;



}




signed main(){
   BOOST
   solve();
}

   
 
  