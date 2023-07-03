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


int main(){
   int n;
   cin >> n;
   set<char>st;
   vector<char>pem;

   int cnt = 3;
   string s;
   cin >> s;
   for(int i =0; i < 3; i++){
      st.insert(s[i]);
      pem.pb(s[i]);
   }

   if(st.size() != 3){
      cout << -1 << endl;
      return 0;
   }

   int idx = 0;

   for(int i= 3; i < n; i++){
      if(s[i] == pem[idx]){
         idx = (idx + 1 ) % 3;
         cnt++;
      }
      //cout << s[i] << " " << pem[idx] << endl;
   }
   cout << cnt << endl;

   


}