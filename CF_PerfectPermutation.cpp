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
   int n; cin >> n;

   if(n % 2 == 1) cout << -1 << endl;
   else{
      int arr[n];

      for(int i = 1; i<= n; i++){
         arr[i] = i;

         if(i % 2 == 0){
            cout << arr[i] << " " << arr[i-1] << " ";
         }   
      }
   }

  
  

  

}

   
  



