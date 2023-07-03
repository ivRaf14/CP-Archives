#include <bits/stdc++.h>
#define ll long long
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

struct E
{
    int lvl, att, lea;
};

struct compare{
    bool operator()(pii a, pii b){
        if(a.fi == b.fi) return a.se < b.se;
        return a.fi > b.fi;
    }
};

void solve(){
    string s; cin >> s;
    int n; cin >> n;
    int sd, sm;
    cin >> sd >> sm;

    E arr[n];

    for(int i=0; i < n-1; i++){
        cin >> arr[i].lvl >> arr[i].lea >> arr[i].att;
    }

    priority_queue<pii, vector<pii>, compare> pq;
    int res = 0;

    // for(int i=0; i < n-1; i++){
    //     pq.push({arr[i].att, arr[i].lea});
    // }

    // while(!pq.empty()){
    //     cout << pq.top().fi << " " << pq.top().se << endl;
    //     pq.pop();
    // }

    for(int i=0; i < n-1; i++){
        if(arr[i].lvl <= sd){
            pq.push({arr[i].att, arr[i].lea});
        }
        else{
            while(!pq.empty() && sd < arr[i].lvl){
                res+= pq.top().fi;
                sd++;
                pq.pop();
            }

            if(sd < arr[i].lvl){
                cout << -1 << endl;
                return;
            }
           else if(arr[i].lvl <= sd){
            pq.push({arr[i].att, arr[i].lea});
        }
        }
    }
    //cout << res << endl;

    while(!pq.empty() && sd < sm){
        res+=pq.top().fi;
        sd++;
        pq.pop();
    }
    

    if(sd < sm){
        cout << -1 << endl;
        return;
    }

    while(!pq.empty()){
        res+= min(pq.top().fi, pq.top().se);
        pq.pop();
    }

    cout << res << endl;




}




signed main(){
   BOOST
   solve();
}

   
 
  