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
    double x, y;
};

double dist(P a, P b){
    double res = sqrt( pow(a.x - b.x,2) + pow(a.y-b.y, 2));
    return res;
} 

double cross(P a, P b, P c){
    double x1  =b.x- a.x, x2 = c.x - b.x;
    double y1  =b.y- a.y, y2 = c.y - b.y;
    double temp = x1 * y2 - x2 * y1;

    return temp;
}

bool cmp(P a, P b){
    if(a.x == b.x) return a.y < b.y;
    else return a.x < b.x;
}

P piv;

bool cmp2(P a, P b){
    double dir = cross(piv, a, b);

    if(dir == 0){
        double dist = sqrt(pow(piv.x - a.x, 2)  + pow(piv.y - a.y, 2));
        double dist2 = sqrt(pow(piv.x - b.x, 2)  + pow(piv.y - b.y, 2));
        return dist > dist2;
    }
    else return dir > 0;
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
    sort(arr+1, arr+n, cmp2);

    // for(int i=0; i < n; i++){
    //     cout << arr[i].x << arr[i].y;
    // }

    stack<P>st;

    for(int i=0; i < n; i++){

        while(st.size() >= 2){
            P top = st.top();
            st.pop();
            P prev = st.top();
            st.push(top); 

            if(cross(prev, top, arr[i]) < 0) st.pop();
            else break;
        }

        st.push(arr[i]);
    }
    P up = st.top();

    //if(st.size() % 2 == 1) st.push(st.top());
    vector<P>hull;

    double ans = 0;
    while(st.size() != 0){
       hull.pb(st.top());
       st.pop();
    }
    //ans+=dist(st.top(), up);
    reverse(hull.begin(), hull.end());
    for(auto it : hull){
        cout << it.x << " " << it.y << endl;
    }

    //cout << fixed << setprecision(6) << ans << endl;




}




signed main(){
   BOOST
   solve();
}

   
 
  