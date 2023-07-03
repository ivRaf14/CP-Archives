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


 const int limit = 1e6+5;
 const int bat = 1e6;
 const int int_range = 1e9;
 const int MA = 1e8;



void solve(){
   ll n, c; cin >> n >> c;
   c++;
  ll arr[n];


  for(ll i=0; i <n; i++){
    cin >> arr[i];
  }

  sort(arr, arr+n);

  ll low = 0;
  ll high = arr[n-1];
  
  ll ans = 0;
  
  while(low <= high){
    ll mid = (high + low) / 2;
    ll cnt = 1;
    ll start = 0;
    for(ll i =1; i < n; i++){
    if(mid <= arr[i] - arr[start]){
      start = i;
      cnt++;
      }
    }

    if(cnt < c) high = mid-1;

    else{
      ans = mid;
      low = mid+1;
      
    }
    
  }
  

  cout << ans << endl;

}

signed main(){
  
  int n; cin >> n;
  while(n--) solve();  

}