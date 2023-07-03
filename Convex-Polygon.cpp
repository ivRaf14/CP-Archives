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

struct P
{
    int x, y;
};

int cross(P a, P b, P c){
    int x1 = b.x - a.x , x2 = c.x - b.x;
    int y1 = b.y - a.y , y2 = c.y - b.y;
    int dir = (x1 * y2) - (x2 * y1);

    if(dir > 0) return 1;
    else if(dir == 0) return 0;
    return -1;
}

bool cmp(P a, P b){
    if(a.x == b.x) return a.y < b.x;
    return a.x < b.x;
}

P piv;

bool cmp2(P a, P b){
    int dir = cross(piv, a, b);
    if(dir == 0){
        int piva = sqrt(pow(piv.x - a.x, 2) + pow(piv.y - a.y, 2));
        int ab = sqrt(pow(piv.x - b.x, 2) + pow(piv.y - b.y, 2));
        return ab > piva;
        // longest
    }
    return dir <= 0;
}

void solve(){
    int n;
    cin >> n;
    P arr[n];

    for(int i=0; i < n; i++){
        cin >> arr[i].x >> arr[i].y;
    }
    sort(arr, arr+n, cmp);
    piv = arr[0];
    sort(arr + 1, arr+n, cmp2);

    // for(int i=0; i < n; i++){
    //     cout << arr[i].x <<" " << arr[i].y << endl;
    // }
    for(int i=2; i <= n; i++){
        P prevv = arr[i-2];
        P prev = arr[i-1];

        int dir = cross(prevv, prev, arr[i%n]);
         //cout << "diffff " << dir << endl;
        if(dir ==  1){
            cout << "TIDAK" << endl;
            return;
        }
    }

    cout << "YA" << endl;



}




signed main(){
   BOOST
   solve();
}

   
 
  