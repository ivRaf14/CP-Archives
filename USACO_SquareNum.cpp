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
void setIO(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}


signed main(){
  setIO("square");
  int first[4];
  int second[4];
  for(int i=0; i < 4; i++)cin >> first[i];
  for(int i=0; i < 4; i++)cin >> second[i];

  int x = max(first[2], second[2]) - min(first[0], second[0]);
  int y = max(first[3], second[3]) - min(first[1], second[1]);
  //cout << x << " " << y << endl;
  int res = max(x,y);
  cout << res * res << endl;
 





  
}