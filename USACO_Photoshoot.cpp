#include <bits/stdc++.h>
#define int long long
//#define mp make_pair
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
   int n; cin >> n;
   string s; cin >> s;
   string temp = "";

   for(int i=0; i < n-1; i+=2){
      if(s[i] == 'H' && s[i+1] == 'G') temp+='T'; 
      if(s[i] == 'G' && s[i+1] == 'H') temp+='F'; 
   }
   //cout << temp << endl;
   string ans = "";

   bool der = false;
   char cc = temp[0];
   for(int i=1 ; i< temp.size(); i++){
      if(temp[i] == cc) continue;
      else{
         ans+=cc;
         cc = temp[i];

      }
   }

   if(ans[ans.size()-1] != cc && cc != 'T')ans+=cc;
   

   cout << ans.size() << endl;
  




   






}






signed main(){
   BOOST
   //Usaco("outofplace");
   solve();
   
   
}

   
 
  