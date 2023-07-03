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
int arr[10] = {0};
int res[10] = {0};
bool bisa = false;
int n; 

void rec(int a, int b){
  if(a == n-1 && b == n){
    bool is = true;
    for(int i=0; i < n; i++){
      if(res[i] != arr[i]) is = false;
      //cout << res[i] << " ";

    }
    if(is) bisa = true;
    //cout << endl;
    return;
  }

  
  
  if(b == n){
    return rec(a+1, a+2);
  }

  res[a]+=3;
  rec(a,b+1);
  res[a]-=3;

  res[b]+=3;
  rec(a,b+1);
  res[b]-=3;

  res[a]++;
  res[b]++;
  rec(a,b+1);

  res[a]--;
  res[b]--;
  
} 

void solve(){
   cin >> n;
   for(int i=0; i < n; i++){
    cin >> arr[i];
   }

   rec(0,1);

   

   if(!bisa) cout << "NO" << endl;
   else cout << "YES" << endl;

   bisa = false;


}


 
 
signed main(){
   BOOST
   int n; cin >> n;
   while(n--){
      solve();
   }
}
   
 
  