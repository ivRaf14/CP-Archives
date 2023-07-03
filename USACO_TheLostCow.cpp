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
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}
 
 signed main(){
  BOOST
  Usaco("lostcow");

  int x, y;
  cin >> x >> y;
  int count = 1;
  int begin = x;
  int total = 0;
  int prevx = x;

  while(true){
    int currx = begin + count;
    int mini = min(currx, prevx);
    int maxi = max(currx, prevx);
    int di = maxi - mini;
    if( y <= maxi && y >= mini ){
      total+= abs(y - prevx);
    
      break;
    }

    total+= di;
    count*= -2;
    prevx = currx;
   // cout << total << endl;

  }

  cout << total << endl;
  


}