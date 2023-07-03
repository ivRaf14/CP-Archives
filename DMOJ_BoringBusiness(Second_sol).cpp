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


bool cek(int x, int y){
  if(y >= -3){
    if( x >= 0) return false;
  }
  if(y == -4){
    if(x >= 3) return false;
  }
  if(y == -5){
    if( x == -1|| x >= 3) return false;
  }
  if(y == -6){
    if(x == -1 || x >= 7) return false;
  }
  if(y == -7){
    if(x >= -1) return false;
  }
  if(y < -7){
    if(x >= -1) return false;
  }
  return true;
}
map<int, map<int, int > > cut;



signed main(){
  //Usaco("mowing");
  int x = -1;
  int y = -5;

  cut[x][y] = 1;

  char ipt;

  while(cin >> ipt){
    if(ipt == 'q') break;

    int b; cin >> b;

    int dirx = 0;
    int diry = 0;

    if(ipt == 'l') dirx = -1;
    else if(ipt == 'r') dirx = 1;
    else if(ipt == 'u') diry = 1;
    else diry = -1;

    for(int i=0; i < b; i++){
      x+=dirx;
      y+= diry;

      if(!cut[x][y] && cek(x,y)){
        cut[x][y] = 1;
        
      }
      else{
        cout << x + dirx * (b - (i+1)) << " " << y + diry * (b - (i+1)) << " " << "DANGER" << endl;
        return 0;
      }
    }
    cout << x << " " << y << " " << "safe" << endl;
  }


}

   
  



