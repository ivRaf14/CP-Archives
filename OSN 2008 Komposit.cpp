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

bool prime[1000];
int a, b;

void sieve(){
   for(int i = 2; i <=b; i++){
      if(prime[i]){
         for(int j=i*i; j<=b; j+=i){
            prime[j] = false;
         }
      }
   }
}
int main(){
   cin >> a >> b;
   memset(prime, true, sizeof(prime));
   prime[1] = false;
   sieve();
   int cnt = 0;

   for(int i =a; i <=b; i++){
      if(!prime[i] && i!=1)cnt++;
   }
   cout << cnt << endl;

}