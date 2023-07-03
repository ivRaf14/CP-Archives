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

ll lcm (ll a, ll b){
  return (a*b) / __gcd(a,b);
}

int main(){
   BOOST

   ll a ,b, c, d;
   cin >> a >> b >> c >> d;

   // a / b  c /d
   ll kpk = lcm(b,d);

   ll e = a * (kpk / b) + c * (kpk / d);
   ll f = kpk;

   //cout << e << f <<endl;

   ll fpb = __gcd(e,f);
   while(fpb != 1){
    e/=fpb;
    f/=fpb;
    fpb = __gcd(e,f);
   }
   cout << e << " " << f << endl;


   
   

}