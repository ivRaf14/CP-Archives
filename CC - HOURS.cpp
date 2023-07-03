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



int main(){
 int n, h, k; 
 cin >> n >> h >> k;
 bool jawab = false;
 while(n--){
  int jam; cin >> jam;
  if(k+jam >= h){
    jawab = true;
    break;
  }
 }

 if(jawab) cout << "YES" << endl;
 else cout << "NO" << endl;







  
   

}