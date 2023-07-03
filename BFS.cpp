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

int p, l;
int res = INT_MAX;
int arr[200][200];
int visited[200][200];

struct Node
{
  int x, y, dist;
};

int dirx[] = {2, 2, -2, -2, 1, -1, 1, -1};
int diry[] = {1, -1, 1, -1, 2, 2, -2, -2};

bool isvalid(int x, int y){
  return(x < p && y < l && x >0 && y >0 && visited[x][y] == 0);
  
}
void bfs(int x, int y, int endx, int endy, int &res){
  queue<Node> que;

  visited[x][y] = 1;
  que.push({x ,y, 0}); 

  while(!que.empty()){
    Node elem = que.front();
    que.pop();

    int r = elem.x;
    int c = elem.y;
    int jar = elem.dist;

    if( r == endx && y == endy){
      res = min(res, jar);
      
    }

    for(int i=0; i < 8; i++){
      int arahut = r + dirx[i];
      int arahsel = c + diry[i];
      if(isvalid(arahut, arahsel) ){
        visited[arahut][arahsel] = 1;
        que.push({arahut, arahsel, jar+1});
        cout << arahut << " " << arahsel << " " << jar << endl;
      }
    }

  } 
  
    cout << res << endl;
}

int main(){
  p = l = 9;

 int startx, starty;
  cin >> startx >> starty;

  int tarx, tary;
  cin >> tarx >> tary;
  int res = INT_MAX;

  bfs(startx, starty, tarx, tary, res);




}