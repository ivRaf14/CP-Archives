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

map<int, map<int, int > > cut;



signed main(){
  Usaco("mowing");
  
  int n; cin >> n;
  int x, y, times;
  int ans = INT_MAX;

  x = y = times = 0;

  while(n--){
    char a; int b;
    cin >> a >> b;

    int dirx = 0;
    int diry = 0;

    if(a == 'N') diry = 1;
    else if(a == 'S') diry = -1;
    else if(a == 'E') dirx = 1;
    else dirx = -1;

    for(int i=0; i < b; i++){
      times++;
      x+=dirx;
      y+=diry;

      if(cut[x][y]){
        ans = min(ans, times - cut[x][y]);
      }
      cut[x][y] = times;
    }
  }
  if(ans == INT_MAX) cout << -1 << endl;
  else cout << ans << endl;


}

   
  



