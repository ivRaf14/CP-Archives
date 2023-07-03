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
   int a, b, c;
   cin >> a >> b >> c;
   map<int,int>mp;
   vector<int>vec;

   int len = a + b + c;
   for(int i=0; i < len; i++){
      int a; cin >> a;
      mp[a]++;
   }
   for(auto it = mp.begin(); it!=mp.end(); it++){
      if(it->second >= 2) vec.pb(it->first); 
   }

   sort(vec.begin(), vec.end());
   cout << vec.size() << endl;
   for(auto it : vec){
      cout << it << endl;
   }



}