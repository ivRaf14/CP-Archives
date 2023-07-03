#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
//int range 1e9
//ll range 10e18
//double > float

const int limit = 1e6+5;
const int bat = 1e6;
const int int_range = 1e9;


int main(){
  int n;
  cin >> n;
  int p1, p2, max;
  int pem;
  p1 = p2 = max = 0;
  int ipt1, ipt2;

  for(int i=0; i < n; i++){
    cin >> ipt1 >> ipt2;

    p1+=ipt1;
    p2+=ipt2;
    int res = abs(p1-p2);
    if(res > max){
      max = res;

      if(p1 > p2)pem = 1;
      else pem = 2;
    }
  }
  cout << pem << " " << max  << endl;
 

}