#include <bits/stdc++.h>
#define int long long
#define ll unsigned long long
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

void factor(int n, map<int,int> &fact){
   
   while(n % 2 == 0){
      fact[2]++;
      n/=2;
   }
   

   for(int i= 3; i <= sqrt(n); i+=2){
      while(n % i == 0){
         fact[i]++; 
         n/=i;
      }
   }

   if(n > 2) fact[n]++;
   

}

 
 
void solve(){
  
   bool prime[1005];
   memset(prime, 1, sizeof(prime));  

   prime[0] = prime[1] = 0;

   for(int i = 2; i*i <= 1000; i++){
      if(prime[i]){
         for(int j = i * i; j<= 1000; j+=i){
            prime[j] = 0;
         }
      }
   }
   //cout << prime[5];

   // for(int i=0; i <= 1000; i++){
   //    if(prime[i]) cout << i << " ";
   // }

   map<int,int>factup, factdown;

   int n; cin >> n;

   for(int i=0; i < n; i++){
      int a; cin >> a;

      for(int i = 2; i<=a; i++){
         if(prime[i]){
            factup[i]++;
         }
         else{
            factor(i,factup);
         }
      }
   }

   int m; cin >> m;
   for(int i=0; i < m; i++){
      int a; cin >> a;

      for(int i = 2; i<=a; i++){
         if(prime[i]){
            factdown[i]++;
         }
         else{
            factor(i,factdown);
         }
      }
   }
   

   for(int i = 2; i<= 1000; i++){
      if(factup[i] && factdown[i]){
         if(factup[i]>= factdown[i]){
            factup[i]-=factdown[i];
            factdown[i] = 0;
         }
         else{
            factdown[i]-=factup[i];
            factup[i] = 0;
         }
      }
   }
   // for(auto it = factdown.begin(); it != factdown.end(); it++){
   //    cout << it->fi << " " << it->se << endl;
   // }
   
   for(int i = 2; i<= 1000; i++){
      if(factup[i] == 1) cout << i << " ";
      else if(factup[i] >= 2) cout << i << '(' << factup[i] << ')' << " ";
   }
   cout << endl;

   for(int i = 2; i<= 1000; i++){
      if(factdown[i] == 1) cout << i << " ";
      else if(factdown[i] >= 2) cout << i << '(' << factdown[i] << ')' << " ";
   }
   cout << endl;



  
   




}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  