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
   

   bool arr[100];
   memset(arr, true, sizeof(arr));
   arr[0] = arr[1] = false;

   for(int i = 2; i <= sqrt(100); i++){
      if(arr[i]){
         for(int j = i * i; j <= 100; j+=i){
            arr[j] = false;
         }
      }
   }
   // for(int i=0; i <= 100; i++){
   //    cout << arr[i] << " ";
   // }
   int a, b;
   cin >> a >> b;

   for(int idx = a+1; idx<= 100; idx++){
      if(arr[idx] == true){
         if(idx == b) cout << "YES" << endl;
         else{
            cout << "NO" << endl;
         }
         break;
      }
   }
  

  

}

   
  



