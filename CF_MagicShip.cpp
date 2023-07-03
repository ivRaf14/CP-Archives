#include <bits/stdc++.h>
#define int  long long
#define mp make_pair
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;
//int range 1e9
//ll range 1e18
//double > float
// 1sec -> 1e8
const int MOD = 1e9 + 7;

void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}


   int n;
   int sa, sb;
   int ea, eb;
   string s;
   // int dpx[100005] = {0};
   // int dpy[100005] = {0};

// bool good(int times){
//    int xx = 0;
//    int yy = 0;
//    int i = 0;

//    int t = times / n;
//    int rem = times % n;

//    xx = sa +  (t * dpx[n]) + dpx[rem];
//    yy = sb +  (t * dpy[n]) + dpy[rem];
  

//    int dist = abs(xx - ea) + abs(yy - eb);
//    return dist <= times; 
// }

void solve(){
   
   cin >> sa >> sb;
   cin >> ea >> eb;
   cin >> n;
   cin >> s;

    // for(int i = 100000; i >= 0; i--){
      //cout << " " << good(50000000000000) << endl;
  // }

    vector<int> devx(n+1,0);
        vector<int> devy(n+1,0);

    for(int i=0; i < s.size(); i++)
        {
            devx[i+1] = devx[i];
            devy[i+1] = devy[i];
            if(s[i] == 'U') devy[i+1]++;
            else if(s[i] == 'D') devy[i+1]--;
            else if(s[i] == 'L') devx[i+1]--;
            else devx[i+1]++;
        }

    int lo = 0;
    int ro = (abs(sa - ea) + abs(sb - eb)) * n;

    int ans = -1;

    while(ro >= lo){
      int mid = (lo  + ro) / 2;
      //cout << mid << endl;

      int q = mid / n;
      int r = mid % n;

      int perx = sa + devx[n]*q + devx[r];
      int pery = sb + devy[n]*q + devy[r];
      int d = abs(ea-perx) + abs(eb-pery);

      if(d <= mid){
         ro = mid-1;
         ans = mid;
      }
      else lo = mid + 1;
    }

   
    cout << ans << endl;






}




signed main(){
   BOOST
   solve();
}

   
 
  