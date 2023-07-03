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

void solve(){
  string s; cin >> s;
  bool ber = false;
  int cnt = 0;

  for(int i=0; i < s.size(); i++){
    if(s[i] == '1' && !ber){
      cnt++;
      ber = true;
    }
    else if(s[i] == '0') ber = false;
  }
  cout << cnt << endl;
}

int main(){
 int n; cin >> n;
 while(n--){
  solve();
 }







  
   

}