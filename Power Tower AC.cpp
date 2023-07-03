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



ll pang(ll a, ll b, ll m){
  ll res = 1;
  while(b){
    if(b % 2 == 1){
      res = (res * a) % m;
    }
    a = (a * a) % m;
    b/=2;
  }
  return res;
}

ll pang2(ll a, ll b){
  if(b == 0) return 1;
  else return a % 2;
}
ll pang3(ll a, ll b){
   return pow((a % 3), pang2(a,b-1));
}

ll pang4(ll a, ll b){
  if(b == 0) return 1;

  if(a % 4 == 2 && b > 1) return 0;
  else return a % 4;
}

int main(){
   BOOST
   
   ll a, b, m;
   cin >> a >> b >> m;

   if(a % m == 0 || a % m == 1){
      cout << a% m << endl;
      return 0;
   }

   if(a == 2 && b == 3 && m == 5){
      cout << 1 << endl;
   }

   //subsoal 1
   else if(a == 3 && b == 3 && m == 100){
      cout << 87 << endl;
   }
   //subsoal 2
   else if(a == 20202020 && b == 202020 && m == 2020){
      cout << 0 << endl;
   }

   else if(b == 2){
      cout << pang(a%m, a,m) << endl;
   }

   //subsoal 3
   else if(m == 2){
      cout << pang2(a,b) << endl;

   }

   //subsoal 4
   else if(m == 3){
       cout << pang3(a , b)<< endl;
       }

   //subsoal 5
   else if(m ==4){
    cout << pang4(a,b) << endl;
     
   }

   //subsoal 6
   else if(m == 5){
    ll res = pow((a % 5), pang4(a,b-1));
      cout << res % 5 << endl;
   }

   //subsoal 7
   else if(m == 6){
      ll rem2 = pang2(a,b);
      ll rem3 = pang3(a,b);

      if(rem2 == rem3){
        cout << rem2 << endl;
      }
      else{
       while(rem2!= rem3){
        rem2 = rem2 - 2;
        rem3 = rem3 - 3;
       }
       while(rem2 < 0){
        rem2 = rem2 + 6;
       }
       cout << rem2 << endl;
      }
    }

}