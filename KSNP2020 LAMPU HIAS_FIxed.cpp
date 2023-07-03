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

 
 
void solve(){
   int n; cin >> n;
   string s; cin >> s;
   set<char> st;
   int lamp[27] = {0};
   int cnt = 0;

   for(int i=0; i < n; i++){
      lamp[s[i] - 'A' + 1]++;
      st.insert(s[i]);
   }
   if(st.size() < 3){
         cout << -1 << endl;
         return;
         
   }
   sort(lamp+1, lamp + 27 , greater<int>());
   
   //cout << lamp[1] <<lamp[2] << lamp[3] ;

   if(lamp[1] > lamp[3]) cnt++; 
   if(lamp[2] > lamp[3]) cnt++;

   cout << cnt + lamp[3] * 3 << endl; 


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  