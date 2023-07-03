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
struct Point
{
  int x, y;
};

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

 signed main(){
  map<int, map<int, bool > > visited;
  
  Point start;
  start.x = -1;
  start.y = -5;

  char ipt; int dir;
  bool flag = false;
  while(true){
    cin >> ipt >> dir;
    if(ipt == 'q') break;

    if(ipt == 'l') {
      int temp = start.x - dir;
      for(int i = start.x; i >= temp ; i--){
        if( !visited[i][start.y]){visited[i][start.y] = 1;}
        else{
          flag = true;
          break;
        }
      }
      start.x -= dir;
    }

    else if(ipt == 'r'){
      int temp = start.x + dir;
      for(int i=start.x; i <= temp; i++){
        if(!visited[i][start.y]){visited[i][start.y] = 1;}
        else if(visited[i][start.y] == 1){
          flag = true; 
          break;
        }
        
      }
      start.x+= dir;
    }

    else if(ipt == 'u'){
      int temp = start.y + dir;
      for(int i=start.y; i <= temp; i++){
        if( !visited[start.x][i]) {visited[start.x][i] = 1;}
        else{
          flag = true;
          break;
        } 
      }
      start.y+=dir;
    }
    else if(ipt == 'd'){
      int temp = start.y - dir;
      for(int i = start.y; i >= temp; i--){
        if( !visited[start.x][i]) {visited[start.x][i] = 1;}
        else{
          flag = true;
          break;
        }
        
      }
      start.y -=dir;
    }
    if(cek(start.x, start.y) && !flag){
      cout << start.x << " " << start.y << " " << "safe" << endl;
      if(visited[start.x][start.y])visited[start.x][start.y] = false;
    }
    else{
      cout << start.x << " " << start.y << " " << "DANGER" << endl;
      break;
    } 
  }
}
  



