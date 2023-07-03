#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll dp[10005];

ll solve(ll n){
    dp[0] = dp[1] =dp[2] = 1;
    
    for(ll i=3; i <=n; i++){
        
        
            dp[i] = ((dp[i-1]% 1000000 ) + (dp[i-3] % 1000000)) % 1000000;
        
    }
    return dp[n];

}


int main(){
    
    ll ipt;
    cin >> ipt;

    cout << solve(ipt) << endl;
}
