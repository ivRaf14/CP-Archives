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

const int limit = 1e6+5;
const int bat = 1e6;
const int int_range = 1e9;



int main(){
   int n, k;
   cin >> n >> k;
   vector<int>vec;
   int res = 0;
   for(int i=0; i < n; i++){
      int a; cin >> a;
      vec.pb(a);
   }
   sort(vec.begin(), vec.end());

   for(int i=0; i < n; i++){
      auto it = lower_bound(vec.begin(), vec.end(), vec[i] + k);

      if(it != vec.end()){
         int idx = (it - vec.begin());
         idx--;
        
         res+= n-1 - idx;
         
      }
      else break;
   }
   cout << res << endl;
}