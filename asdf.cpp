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

bool cut[1000][1000];

signed main(){
  //Usaco("mowing");

  int N; cin >> N;

  
  int row, col, times;
  row = col = times = 0;
  
  int jwb = INT_MAX;
	for (int i = 0; i < 1000; i++){
         for (int j = 0; j <1000; j++){
             cut[i][j] = 0;}
     }
   

  while(N--){
    char a; int b;
    cin >> a >> b;

    if(a == 'N'){
      for(int i = col; i <= col+b; i++){
        if(!cut[row][i]){
          cut[row][i] = 1;
          
        }
        else{
          jwb = min(jwb,times - row);
          

        }
        times++;
      }
      col+=b;
    }

    if(a == 'E'){
      for(int i = row; i <= row+b; i++){
        if( !cut[i][col]){
          cut[i][col] = 1;
          
        }
        else{
          jwb = min(jwb,times - col);
          

        }
        times++;
      }
      row+=b;
    }

    if(a == 'S'){
      for(int i = col; i >= col-b; i--){
        if(!cut[row][i]){
          cut[row][i] = 1;
          
        }
        else{
          jwb = min(jwb,times - row);

          

        }
        times++;
      }
      col-=b;
    }

    if(a == 'W'){
      for(int i = row; i >= row-b; i--){
        if(!cut[i][col]){
          cut[i][col] = 1;
          
        }
        else{

          jwb = min(jwb,times - col);
          

        }
        times++;
      }
      row-=b;
    }
    cut[row][col] = 0;
    times--;
    //cout << row << " " << col  << "fsfss" << times << endl;

  }
  if(jwb == INT_MAX) cout << -1 << endl;
  else cout << jwb << endl;


}

   
  




