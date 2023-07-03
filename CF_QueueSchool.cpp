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
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}


signed main(){
   int n, t;
   cin >> n >> t;
   string s; cin >> s;

   for(int tim=1; tim<=t; tim++){
      for(int i=0; i < n; i++){
         if(s[i] == 'B'){
            if(s[i+1] == 'G'){
               swap(s[i], s[i+1]);
               i++;
            }
         }
      }
   }

   for(int i=0;i < n; i++){
      cout << s[i];
   }




  
  

  

}

   
  



