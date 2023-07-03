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

bool prime[bat+5];
int dgt = 1;

void sieve(){
   ll i, j;
   for(i = 2; i <= bat; i++){
      if(prime[i]){
         for(j= i * i; j <= bat; j+=i){
            prime[j] = false;
         }
   
      }
   }
      
}
int check(int n){
   int res = 0;
   while(n != 0){
      n/=10;
      res++;
   }
   return res;
   
}
int main(){
   BOOST
   
   int l, r;
   
   cin >> l >> r;
   memset(prime, true, sizeof(prime));
   prime[1] = false;
   
   sieve();

   
   
   //check(r);
   bool ada = false;
   ll i, j, temp;

   for(i=l; i <= r ; i++){
      for(j = l; j <= r; j++){
         if(prime[i] && prime[j]){
             string dper = to_string(i) + to_string(j);
             int temp = stoi(dper);
            if(prime[temp]){
               cout << i << " " << j << endl;
               ada = true;
            }
         }
      }
   }

   if(!ada){
      cout << "TIDAK ADA" << endl;
   }
   


}