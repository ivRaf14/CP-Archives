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

void forsquare(ll a){
   ll N = sqrt(a);

   for(ll i= N; i >= 0; i--){
      if(i * i > a){
         continue;
      }

      for(ll j = N; j >=0; j--){
         if(i * i + j *j > a){
               continue;
            }
         for(ll k = N; k >=0; k--){
            if(i * i + j *j + k*k > a){
               continue;
            }
            for(ll l =N; l>=0; l--){
               if(i * i + j *j + k*k + l*l > a){
                  continue;
               }
               if(i * i + j *j + k*k + l*l == a){
                  cout << i << " " << j << " " << k << " " << l;
                  return;
               }
            }
         }
      }
   }
}

int main(){
   BOOST
   
   ll a; cin >> a;
   forsquare(a);

   
   

} 