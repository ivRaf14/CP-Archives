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
 
 
 
signed main(){
  //setIO("billboard");
  int white[4];
  int black1[4];
  int black2[4];
 
  for(int i= 0; i< 4; i++) cin >> white[i];
  for(int i= 0; i< 4; i++) cin >> black1[i];
  for(int i= 0; i< 4; i++) cin >> black2[i];
 
  unsigned ll first = (ll)max(min(white[2], black1[2]) - max(white[0],black1[0]) , 0 ) * (ll)max(min(white[3], black1[3]) - max(white[1], black1[1]), 0 );
  unsigned ll second = (ll)max(min(white[2], black2[2]) - max(white[0],black2[0]), 0 ) * (ll)max(min(white[3], black2[3]) - max(white[1], black2[1]), 0 ); 
  unsigned ll third = (ll)max(min(black2[2], min(black1[2], white[2])) - max(black2[0],max(black1[0], white[0])) , 0 ) * (ll)max(min(black2[3], min(black1[3], white[3]) ) - max(black2[1], max(black1[1], white[1])), 0 );
  //cout << first << " " << second << " "<< third << endl;
  unsigned ll luas = (ll)(white[2] - white[0]) * (ll)(white[3] - white[1]);
   //cout << luas<< endl;
  
  if(luas - first - second + third > 0) cout << "YES" << endl;
  else cout << "NO" << endl;
 
 
 
 
  
 
 
 
  
}