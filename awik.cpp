#include <bits/stdc++.h>
#define int long long
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

int arra[1000005];
int arrb[1000005];


void solve(){
    int n, m, s, a,b;
    cin >> n >> m >> s >> a >> b;
    

    for(int i=1; i <= n; i++) cin >> arra[i];
    for(int i=1; i <= m; i++) cin >> arrb[i];

    sort(arra+1, arra+1+n, greater<int>());    
    sort(arrb+1, arrb+1+m, greater<int>());

    //  for(int i=0; i < n; i++){
    //     cout << arra[i] << " ";
    // }
    int suma[n];
    
    for(int i = 1; i <= n; i++) arra[i] = arra[i] + arra[i-1];
    for(int i = 1; i <= m; i++) arrb[i] = arrb[i] + arrb[i-1];
    
    int j =m;
    int ans = 0;
    for(int i=0; i <= n; i++){
        if(i * a > s) break;

        while(i * a + j * b > s)j--;

        ans = max(ans, arra[i] + arrb[j]);
    }
    cout << ans << endl;





}




signed main(){
   BOOST
   solve();
}

   
 
  