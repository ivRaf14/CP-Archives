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
   cin >> a >> b;
   string has = "";

   while(a > 0){
      int res = a % b;
      has = to_string(res) + has;
      a = a/b;
   }
   cout << has << endl;

}