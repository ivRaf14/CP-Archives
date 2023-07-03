#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


int main(){
  BOOST
  int n; cin >> n;
  string res = "I hate";

  for(int i=2; i <= n; i++){
    if(i % 2 == 0) res+=" that I love";
    else res+=" that I hate";
  }
  res+=" it";
  cout << res << endl;

 









  
   

}