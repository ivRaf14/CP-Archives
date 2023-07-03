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
  setIO("billboard");
 int fboard[4],sboard[4], truck[4];

 for(int i=0; i < 4; i++) cin >> fboard[i];
 for(int i=0; i < 4; i++) cin >> sboard[i];
 for(int i=0; i < 4; i++) cin >> truck[i]; 

  int area_first = (fboard[3] - fboard[1]) * (fboard[2] - fboard[0]);
  int area_second = (sboard[3] - sboard[1]) * (sboard[2] - sboard[0]);
  int area_inter1 =  max(min(fboard[2], truck[2]) - max(fboard[0],truck[0]), 0 ) * max(min(fboard[3], truck[3]) - max(fboard[1], truck[1]), 0 );
  int area_inter2 = max(min(sboard[2], truck[2]) - max(sboard[0],truck[0]), 0 ) * max(min(sboard[3], truck[3]) - max(sboard[1],truck[1]), 0 );
  int total = area_first + area_second - area_inter1 - area_inter2;
  cout << total << endl;




  
}