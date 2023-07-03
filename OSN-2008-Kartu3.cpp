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

 void print(int a, int b){
   if(a > b) cout << 'A' << endl;
   else cout << 'B' << endl;
 }
 
void solve(){
   int al = 0;
   int be = 0;
   char arr[3][6];

   for(int i=0; i < 3; i++){
      for(int j = 0; j < 6; j++){
         cin >> arr[i][j];
      }
   }
   // ->
   for(int i=0; i < 3; i++){
      int a,b;
      a = b = 0;
      for(int j = 1; j < 6; j+=2){
         if(arr[i][j] == 'A') a++;
         if(arr[i][j] == 'B') b++;
      }
      if(a == 3 || b == 3){
         if(a > b) al++;
         else if(b > a) be++;
      }
   }
   // bawah
   for(int i=1; i < 6; i+=2){
      int a, b;
      a = b = 0;
      for(int j = 0; j < 3; j++){
         if(arr[j][i] == 'A') a++;
         if(arr[j][i] == 'B')b++;
      }
       if(a == 3 || b == 3){
         if(a > b) al++;
         else if(b > a) be++;
      }
   }
   // diag;
  

   if(arr[0][1] == 'A' && arr[1][3] == 'A' && arr[2][5] == 'A') al++;
   if(arr[0][1] == 'B' && arr[1][3] == 'B' && arr[2][5] == 'B') be++;
   if(arr[2][1] == 'A' && arr[1][3] == 'A' && arr[0][5] == 'A') al++;
   if(arr[2][1] == 'B' && arr[1][3] == 'B' && arr[0][5] == 'B') be++;

   if(al > be) cout << 'A' << endl;
   else if(be > al) cout << 'B' << endl;
   else cout << 'S' << endl;




}


 
 
signed main(){
   BOOST
   int n; cin >> n;
   while(n--){
      solve();
   }
}
   
 
  