#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
//int range 1e9
//ll range 10e18
//double > float
const int limit = 1e6+5;
const int bat = 1e6;
const int int_range = 1e9;





int main(){
   BOOST

   int n; cin >> n;

   while(n--){

     char a, b;
     int k;
     
     cin >> a >> b >> k;
     string res;
     string next, prev, has;
     res.pb(a);
     res.pb(b);
     //res = ab
     next.pb(b);
     next.pb(a);
     // next = ba
     has = next;
     // has = ba;
     prev+=b;
     // prev = b;
     res+=next;
     //res = abba

     while(res.size() <= k){
      string idx = has; //ba
      has +=prev; // bab
      res+=has; // abbabab
      prev = idx;
     } 
     //cout << res << endl;
     cout << res[k] << endl; 

   }
     
   
}