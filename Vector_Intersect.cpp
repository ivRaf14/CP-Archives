#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pii pair<int,int>
#define double long double
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

double cross(P a, P b, P c){
    // a > b > c;
    double x1 = b.x - a.x, x2 = c.x - b.x;
    double y1 = b.y - a.y, y2 = c.y - b.y;
    double res =  x1 * y2 - x2 * y1;
    if(res == 0) return 0;
    else if(res > 0) return 1;
    return -1;
}
bool onSegment(P p, P q, P r)
{
    if(r.x <= max(p.x, q.x) && r.x >= min(p.x, q.x) && 
        r.y <= max(p.y, q.y) && r.y >= min(p.y, q.y))
    // if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
    //     q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
        return true;
 
    return false;
}
bool istrue = false, linear = 1;

void check(P a, P b, P c, P d){
    double dir[] = {cross(a, b, c), cross(a,b,d), cross(c,d,a), cross(c,d,b)};

    if(dir[0] != dir[1] && dir[2] != dir[3]){
        istrue = true;
        linear = 0;
        return ;
     }
     if( dir[0] == 0 && onSegment(a, b, c)){
        istrue = 1;
        cout << c.x  << " "<< c.y << endl;
        return ;
     }
     if( dir[1] == 0 && onSegment(a, b, d)){
        istrue = 1;
        cout << d.x << " " << d.y << endl;
        return;
     }
     if( dir[2] == 0 && onSegment(c, d, a)){
        istrue = 1;
        cout << a.x << " " << a.y << endl;
        return;
     }
     if( dir[3] == 0 && onSegment(c, d, b)){
        istrue = 1;
        cout << b.x << " " << b.y << endl;
        return;
     }

 
}



void solve(){
    P a, b;
    P c, d;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;
    cin >> d.x >> d.y;

    check(a,b,c,d);

    if(istrue == false){
        cout << -1 <<" " << -1 << endl;
        return;
    }
    if(istrue == 1 && linear == 1) return;

    // if(dir[0] == dir[1] || dir[2] == dir[3]){
    //     cout << -1 << -1 << endl;
    //     return;

    // }

    // if(dir[0] == 0 && )

    cout << fixed << setprecision(9);

    /*
    a
    */
    // 
    double a1 = (b.x - a.x), a2 = (d.x - c.x);
    double b1 = (b.y - a.y), b2 = (d.y - c.y);

    double det = a1 * b2 - a2 * b1;
    
    // y = mx + c
    // y = (b1 / a1) x + c;
    // y * a1 - b1 * x = c;

    double c1 = a1 * a.y - b1 * a.x;
    double c2 = a2 * c.y - b2 * c.x;

    // cout << a1 << " " << b1 << " " << c1 << endl;
    // cout << a2 << " " << b2 << " " << c2 << endl;
    double x = -(c2 * a1 - c1 * a2) / det;
    double y = -(b1 * c2 - b2 * c1) / det;
    //x*=-1;
    //cout << det << endl;

    // double a1 = a.y - b.y, a2 = c.y - d.y;
    // double b1 = -a.x + b.x, b2 = -c.x + d.x;

    // double c1 = a1 * a.x + b1* a.y;
    // double c2 = a2 * c.x + b2* c.y;

    // double D = a1 * b2 - a2 * b1;
    // double Dx = c1*b2 - c2*b1;
    // double Dy = a1*c2 - a2*c1;

    // //cout << cpers << " " << cpers2 << endl;
    //  //cout << a1 << " " << a2 << " " << c1 << " " <<c2 << endl;
    // double x = Dx / D;
    // double y = Dy / D;
    // if(isnan(x) || isnan(y)){
    //     x = 0;
    //     y = 0;
    // }
    cout <<  x << " "; 
    cout << y << endl; 


}




signed main(){
   BOOST
   solve();
}

   
 