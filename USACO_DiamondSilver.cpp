#include <bits/stdc++.h>
#define intq long long
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



void solve(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    int ltor[n];
    int rtol[n];

    for(int i=0; i < n; i++) cin >> arr[i];

    sort(arr, arr+n);

    int l,r;
    l = r = 0;

    // 1 5 5 9 10 12 14

    while(l < n && r < n){
       
       while(r+1 < n && arr[r] - arr[l] <= k){
        r++;
        if(arr[r] - arr[l] > k){
            r--;
            break;
        }
       }

       ltor[l] = r - l + 1;
       l++;
        
        
    }

    

    l = n-1;
    r = n-1;

    while(l >= 0 && r >= 0){
        //cout << l << " " << r << endl;
        while( l-1 >=0 && arr[r] - arr[l] <= k){
            l--;
            if(arr[r] - arr[l] > k){
                l++;
                break;
            }
            
        }
        rtol[r] = r-l + 1;
        r--;
    }

    int ans = 0;
    int temp = 0;

    for(int i=1; i < n; i++){
       rtol[i] = max(rtol[i], rtol[i-1]);
       ans = max(ans, rtol[i] + ltor[i]);
    }


        

       

        cout << ans << endl;




}




signed main(){
   BOOST
   Usaco("diamond");
   solve();
}

   
 
  