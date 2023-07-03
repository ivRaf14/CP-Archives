#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;
//int range 1e9
//ll range 1e18
//double > float
// 1sec -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}


void seimbang(){
   cout << '?' << endl;
   cout << "5 6" << endl;
   cout << "7 8" << endl;
   string s; cin >> s;

   if(s == "KIRI"){
      // 5 6
       cout << '?' << endl;
      cout << "5 7" << endl;
      cout << "6 8" << endl;
      string s; cin >> s;

      if(s == "KIRI") cout << "! 5" << endl;
      else cout << "! 6" << endl;
   }
   else if(s == "KANAN"){
      // 7 8
      cout << '?' << endl;
      cout << "5 7" << endl;
      cout << "6 8" << endl;
      string s; cin >> s;

      if(s == "KIRI") cout << "! 7" << endl;
      else cout << "! 8" << endl;

   }
}

void kanan(){
   //pal 3 4

   cout << '?' << endl;
   cout << "1 3" << endl;
   cout << "2 4" << endl;
   string s; cin >> s;

   if(s == "KIRI"){
      cout << "! 3" << endl;
   }

   else if( s == "KANAN"){
      cout << "! 4" << endl;
   }
}


void kiri(){
   // pal 1 2
   cout << '?' << endl;
   cout << "1 3" << endl;
   cout << "2 4" << endl;
   string s; cin >> s;

   if(s == "KIRI"){
      cout << "! 1" << endl;
   }

   else if(s == "KANAN"){
      cout << "! 2" << endl;
   }
}
 
 
void solve(){
   cout << '?' << endl;
   cout << "1 2" << endl;
   cout << "3 4" << endl;
   string s;
   cin >> s;
   
   if(s == "KIRI") kiri();
   else if(s == "KANAN") kanan();
   else seimbang();


}


 
 
signed main(){
   //BOOST
   solve();
}
   
 
  