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


int main(){
   int a, b;
   a = b =0;

   for(int i=0; i < 6; i++){
      string s; cin >> s;
      if(s[1] == 'A')a++;
      else b++;
   }
   if(b >= 3) cout << 100 << endl;
   else if(b >=2) cout << 70 << endl;
   else if(a >=1 && b>=2) cout << 50 << endl;
   else if(a >=1 && b>=1)cout << 40 << endl;
   else if(a >=2 && b>=1) cout << 25 << endl;
   else if(a >= 3)  cout << 20 << endl;
   else if( a >= 2) cout << 10 << endl;
   else if(b >=5) cout << 5 << endl;
   else cout << 2 << endl;
   


}