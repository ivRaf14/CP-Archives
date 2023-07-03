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
// 1sec -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}
bool visited [1000][1000];

int dirx[] = {2, 2, -2, -2, 1, -1, 1, -1};
int diry[] = {1, -1, 1, -1, 2, 2, -2, -2};

struct elem
{
   int x, y, dist;
};




 bool isvalid(int row, int col, int rownow, int colnow){
   if(rownow <= row && colnow <= col && rownow >=1 && colnow >= 1 && !visited[rownow][colnow]) return true;
   else return false;
 }

 
void solve(){
   int row, col, jk, step, rowp, colp;
   cin >> row >> col >> jk >> step >> rowp >> colp;

  
   memset(visited, false, sizeof(visited));

   queue<elem> que;

   for(int i=0; i < jk; i++){
      int a, b;
      cin >> a >> b;
      visited[a][b] = true;
      que.push({a,b,0});
   }
   
   while(!que.empty()){
      int sx = que.front().x;
      int sy = que.front().y;
      int sdist = que.front().dist;
     // cout << sx << " " << sy << " " << sdist << endl;

      if(sx == rowp && sy == colp){
         break;
      }

      que.pop();

      if(sdist == step) continue;


      for(int i=0; i < 8; i++){
         int nextx = sx + dirx[i];
         int nexty = sy + diry[i];


         if(isvalid(row, col, nextx, nexty)){
            visited[nextx][nexty] = true;
            que.push({nextx, nexty, sdist+1});
         }
      }
   }
   //cout << visited[rowp][colp] << endl;

   // for(int i=1; i<= row; i++){
   //    for(int j=1; j<= col; j++){
   //       cout << visited[i][j] << " ";
   //    }
   //    cout << endl;
   // }

   if(visited[rowp][colp]){
      cout << "TRUE" << endl;
   }
   else cout << "FALSE" << endl;


  
   

  




}


 
 
signed main(){
   BOOST
   int n; cin >> n;
   while(n--){
      solve();
   }
}
   
 
  