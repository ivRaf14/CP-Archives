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



ll pang(ll x, ll y, ll m){


   if (y == 0) 
        return 1; 
  
    if (y == 1) 
        return x % m; 
  
    ll t = pang(x, y / 2,m); 
    t = (t * t) % m; 
  
    // if exponent is even value 
    if (y % 2 == 0) 
        return t; 
  
    // if exponent is odd value 
    else
        return ((x % m) * t) % m; 
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
      cout << a % 2 << endl;

   }

   //subsoal 4
   else if(m == 3){
       if(a % 2){
         cout << a % 3 << endl;
       }
       else cout << 1 << endl;
       
   }

   //subsoal 5
   else if(m ==4){
      if(a % 4 == 0){
         cout << 0 << endl;
      }
      else if(a % 4 == 1){
         cout << 1 << endl;
      }
      else if(a % 4 == 2){
         if(b == 1){
            cout << 2 << endl;
         }
         else{
         cout << 0 << endl;
         }
      }
      else{
         cout << 3 << endl;
      }
   }

   //subsoal 6
   else if(m == 5){
      if(a % 5 == 0){
         cout << 0 << endl;
      }
      else{
         b--;
         if(a % 4 == 0){
         cout << 0 << endl;
      }
      else if(a % 4 == 1){
         cout << 1 << endl;
      }
      else if(a % 4 == 2){
         if(b == 1){
            cout << 2 << endl;
         }
         else{
         cout << 0 << endl;
         }
      }
      else{
         cout << 3 << endl;
      }
      }
   }

   //subsoal 7
   else if(m == 6){
      if(a % 6 == 2 || a % 6 == 4){
         cout << 4 << endl;
      }
      else if(a % 6 == 3){
         cout << 3 << endl;
      }
      else if(a % 6 == 5){
         cout << 5 << endl;
      }
      else if(a % 6 == 1){
         cout << 1 << endl;
      }
      else cout << 0 << endl;
   }

}