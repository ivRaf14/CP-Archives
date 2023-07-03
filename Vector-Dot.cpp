#include <bits/stdc++.h>
#define ll long long
#define double long double
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
struct P{
  double x, y;
};

double sq(double a){
    return a * a;
}

double dot(P a, P b, P c){
  // a > b > c;
  double temp = (b.x-a.x) * (c.x-b.x) + (b.y-a.y) * (c.y-b.y);
  return temp;

}
double dist(P a, P b){
  return sqrt( sq(a.x - b.x) + sq(a.y - b.y));
}



void solve(){
    double s,e;
    cin >> s >> e;

    double x1, y1, x2, y2;
    cin >>x1 >>y1 >> x2 >> y2;
    P start = {s,e};
    P f = {x1,y1};
    P se = {x2,y2};
    cout << fixed << setprecision(6);

    if(x1 == x2 && y2 == y1){
      cout << dist(start, f) << endl;
      return;
    }

    double len = dot(f, se, start);
    double len2 = dot(se, f, start);
    double temp = abs((x2 - x1) * (y1 - e) - (x1 - s) * (y2 - y1)) / dist(f, se);

     if(len > 0) cout << dist(start, se);
    else if (len2 > 0) cout << dist(start, f);
    else cout << temp;
    cout << endl;

    // double fi= sqrt( sq(s - x1) + sq(e - y1));  
    // double se= sqrt( sq(s - x2) + sq(e - y2));
    // double temp = abs((x2 - x1) * (y1 - e) - (x1 - s) * (y2 - y1));  
    // cout << temp << endl;
    // double thi = (temp) / (sqrt(sq(x2 - x1) + sq(y2-y1)));
    // cout << "ff" << thi << endl;
    // double res = min(fi, min(se, thi));
    // //if(fi > se) swap(fi,se);

    


}




signed main(){
   BOOST
   solve();
}