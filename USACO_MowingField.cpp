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
  int x, y, wkt;
  x = y = wkt = 0;
  int jwb = INT_MAX;


  while(n--){
    char a; int b;
    cin >> a >> b;

    if(a == 'N'){
      for(int i = y; i <= y+b; i++){
        if(i != y) wkt++;

        if(!cut[x][i]){
          cut[x][i] = wkt;
        }
        else{

          jwb = min(jwb, wkt - cut[x][i]);
          
          cut[x][i] = wkt;
        }
        
      }
      y+=b;
    }

    if(a == 'E'){
      for(int i = x; i <= x+b; i++){
        if(i != x ) wkt++;

        if(!cut[i][y]){
          cut[i][y] = wkt;
        }
        else{
          jwb = min(jwb, wkt - cut[i][y]);
          cut[i][y] = wkt;
          
          
        }
        //cout << "fsfs" << x << " " << y <<  " " << wkt<<endl;
        
      }
      x+=b;
    }

    if(a == 'S'){
      for(int i = y; i >= y-b; i--){
        if(i != y) wkt++;

        if(!cut[x][i]){
          cut[x][i] = wkt;
        }
        else{
          jwb = min(jwb, wkt - cut[x][i]);
          cut[x][i] = wkt;
        }
        
      }
      y-=b;
    }

    if(a == 'W'){
      for(int i = x; i >= x-b; i--){
        if(i != x ) wkt++;

        if(!cut[i][y]){
          cut[i][y] = wkt;
        }
        else{
          jwb = min(jwb, wkt - cut[i][y]);
          cut[i][y] = wkt;

          //cout << "ffs" << cut[i][y];
         
        }
         //cout << "ini " << i << " " << y << endl;
        
      }
      x-=b;
    }
    //cout << x << " " << y << endl;
    cut[x][y] = 0;
    //cout  << 50-n << " "<< jwb << endl;
    
    
    // for (auto itr = cut.begin(); itr != cut.end(); itr++) {
  
    //     for (auto ptr = itr->second.begin(); ptr != itr->second.end(); ptr++) {
    //         cout << "First key is " << itr->first
    //              << " And second key is " << ptr->first
    //              << " And value is " << ptr->second << endl;
    //     }
    // }
  }

  if(jwb == INT_MAX) cout << -1 << endl;
  else cout << jwb << endl;


}

   
  



