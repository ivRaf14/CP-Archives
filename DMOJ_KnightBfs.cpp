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

int dirx[] = {2, 2, -2, -2, 1, -1, 1, -1};
int diry[] = {1, -1, 1, -1, 2, 2, -2, -2};

int visited[100][100];

bool valid(int x, int y){
  if(x > 0 && y > 0 && x <= 8 && y <= 8 && visited[x][y] == 0) return true;
  else return false;
}

struct Node
{
  int x,y, dist;
};

void bfs(int x, int y, int endx, int endy, int res){
  queue<Node> que;
  visited[x][y] = 1;
  que.push({x, y, 0});

  while(!que.empty()){
    Node arg = que.front();
    que.pop();

    int currx = arg.x;
    int curry = arg.y;
    int currdis = arg.dist;

    if(currx == endx && curry == endy){
      res = min(res, currdis);
      //cout << "hfifsfffs" << endl;
      continue;
    }

    for(int i=0; i < 8; i++){
      int dumx = currx + dirx[i];
      int dumy = curry + diry[i];

      if(valid(dumx, dumy)){
        visited[dumx][dumy] = 1;
        que.push({dumx, dumy,currdis+1});
        //cout <<  dumx << " " << dumy << " " << currdis << endl;
      }
    }
  }
  cout << res << endl;
}

signed main(){
  int startx, starty;
  cin >> startx >> starty;

  int tarx, tary;
  cin >> tarx >> tary;
  int res = INT_MAX;

  bfs(startx, starty, tarx, tary, res);

  

}

   
  



