#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define double long double
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

double sq(double a){
    return a * a;
}

double cross(P a, P b, P c){
    double x1 = b.x - a.x, x2 = c.x - b.x;
    double y1 = b.y - a.y, y2 = c.y - b.y;

    double temp  =x1 * y2 - x2 * y1;
    return temp;
    // if(temp > 0) return 1;
    // else if(temp < 0) return -1;
    // return 0;

}
double dist(P a, P b){
  return sqrt( sq((a.x - b.x)) + sq((a.y - b.y)) );
}

double dot( P a, P b, P c){
    // int x1 = b.x - a.x, x2 = c.x - b.x;
    // int y1 = b.y - a.y, y2 = c.y - b.y;

    // int temp = x1 * x2 + y1 * y2;

    // if(temp > 0) return 1;
    // else if(temp < 0) return -1;
    // return 0;

    double temp = (b.x-a.x) * (c.x-b.x) + (b.y-a.y) * (c.y-b.y);
    return temp;
}

bool between(P a, P b, P c){
    if(c.x >= min(b.x , a.x) && c.x <= max(b.x, a.x) &&
        c.y >= min(b.y, a.y) && c.y <= max(b.y, a.y)) return true;

        return false;
}


int n;

bool check(P arr[], P deng){
    int cnt = 0;

    for(int i=0; i < n; i++){
        if(cross(arr[i], arr[(i+1) % n], deng) == 0 && between(arr[i], arr[(i+1) % n], deng)) return true;
    }

    for(int i=0; i<n; i++){
         P curr = arr[i];
         P next = arr[(i + 1) % n];

         if(curr.y <= deng.y){
            if(next.y > deng.y && cross(curr, next, deng) < 0)cnt--;
         }
         else{
            if(next.y <= deng.y && cross(curr, next ,deng) > 0) cnt++;
         }
     }
         return cnt!= 0;
}

void solve(){
    cin >> n;
    P arr[n];

    for(int i=0; i < n; i++){
        cin >> arr[i].x >> arr[i].y;
    }
    

    //piv = arr[0];
    //sort(arr+ 1, arr + n, cmp);


    P deng;
    cin >> deng.x >> deng.y;
    //sort(arr, arr+n, cmp2);

    bool ans = check(arr, deng);

    if(ans == 0){
        cout << -1 << endl;
        return;
    }
    //P line = {1000000, deng.y};
    
    double real = 1e9;


for(int i=0; i < n; i++){
    double temp = 1e9;

    P curr = arr[i];
    P next = arr[(i + 1) % n];
    
    double len = dot(curr, next, deng);
    double len2 = dot(next, curr, deng);

     if(len > 0) temp = dist(deng, next);
     else if (len2 > 0) temp = dist(deng, curr);

     else{
        double x1 = deng.x - curr.x, x2 = curr.x - next.x;
        double y1 = deng.y - curr.y, y2 = curr.y - next.y;
        temp  = x1 * y2 - x2 * y1;

        temp = abs(temp) /  dist(curr, next);
     }
    
    real = min(real, temp);

}

cout << fixed << setprecision(6) << real << endl;





}




signed main(){
 BOOST
 solve();
}

