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

bool pck(int x, int y , int a, int b){
  if(x >= min(a,b) && x <= max(a, b)) return false;

  return true;
}

int cover(int x, int y, int cow[]){
  if(x >= cow[0] && x<= cow[2] && y>= cow[1] && y <= cow[3]) return true;
  return false;
}

signed main(){
  //setIO("billboard");
  int rec[4];
  int cow[4];
  int doub[4];
  for(int i=0; i < 4; i++) cin >> rec[i];
  for(int i=0; i < 4; i++)cin >> cow[i];

  int crn = 0;

  if(cover(rec[0], rec[1], cow)) crn++;
  if(cover(rec[2], rec[3], cow)) crn++;
  if(cover(rec[0], rec[3], cow)) crn++;
  if(cover(rec[2], rec[1], cow)) crn++;
  //cout << crn << endl;
  int res = 0;

  if(crn < 2){
    cout << (rec[3] - rec[1]) * (rec[2] - rec[0]);
    return 0;
  }
  if(crn == 4){
    cout << res << endl;
    return 0;
  }
  else{
    int ver = max(min(rec[2], cow[2]) - max(rec[0], cow[0]) ,0 );
    int hor = max(min(rec[3], cow[3]) - max(rec[1], cow[1]), 0 );
    res = ((rec[3] - rec[1]) * (rec[2] - rec[0])) - (ver * hor);

  }
  cout << res << endl;



  


 





  
}