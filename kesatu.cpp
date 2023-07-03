#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;
//int range 1e9
//ll range 1e18
//double > float
// 1sec -> 1e8
const int MOD = 1e9 + 7;

void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}



void solve(){
   string s; cin >> s;
   string tmp = "";
   string tmp2 = "";
   for(int i=0; i < 2; i++){
      tmp+=s[i]; 
   }

   for(int i=3; i <5; i++){
      tmp2+=s[i];
   }

   int a = stoi(tmp);
   int b = stoi(tmp2);

   //cout << a << " " << b << endl;



   if(b <=a){
      if(a < 10) cout << "0" << a  << ':' << a << '0' << endl;
      else cout << a << ':' << (a) % 10  << a/10 << endl;
   }

   else {
      if(a+1 >= 24){
         cout << "00:00" << endl;
         return;
      }
         if(a + 1 < 10) cout << "0" << a + 1 << ':'  << a+1 << '0' << endl;
         else   cout << a+1 << ':'   << (a+1) % 10  << a/10 << endl;

      
      // 
      




       
   }
   



}




signed main(){
   BOOST
   solve();
}

   
 
  