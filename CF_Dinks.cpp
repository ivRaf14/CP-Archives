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
   int arr[n];
   double tot = 0;
   for(int i=0; i < n; i++){
      cin >> arr[i];
      tot+= arr[i];
   }

   tot = (tot / 100) / n * 100;
   cout << fixed << setprecision(12) << tot << endl;




  
  

  

}

   
  



