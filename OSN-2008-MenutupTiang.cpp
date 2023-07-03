#include <bits/stdc++.h>
#define int long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;
//int range 1e9
//ll range 1e18
//double > float
// 1sec -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}
struct point
{
   int x, y;

};

bool cmp(point a, point b){
   return a.x < b.x;
}

 bool isbig(point a, point b, point c){
   if((b.x - a.x) * (c.y-b.y) > (b.y-a.y) * (c.x-b.x)) return false;
   else return true;
 }

 int undertop(stack<int> st){
   st.pop();
   int res = st.top();
   return res;
 }
 
void solve(){
   int s, e, n, d;
   cin >> s >> e >> n >> d;
   vector<point>vec;
   vec.pb({s + d/2,0});

   for(int i=0; i < n; i++){
      int a, b; cin >> a >> b;
      vec.pb({a,b});
   }
   sort(vec.begin()+1, vec.end(), cmp);
   vec.pb({e-d/2,0});

   // for(auto it : vec){
   //    cout << it.x << " "  << it.y << endl;
   // }

   stack<int>st;
   

   for(int i=0; i <= n+1; i++){
      while(st.size()>= 2){
         int temp = st.top();
         st.pop();
         int undtop = st.top();
         st.push(temp);

         if(!(isbig(vec[undtop], vec[st.top()], vec[i])))st.pop();
         else break;
      }
      st.push(i);
   }

   double res = 0;
   //cout << res << endl;

        
   while(st.size() > 1){
      int temp = st.top();
      st.pop();
      int undtop = st.top();
      st.push(temp);

   res+= sqrt(pow(vec[st.top()].x - vec[undtop].x, 2) + pow(vec[st.top()].y - vec[undtop].y, 2));
   //cout << sqrt(pow(vec[st.top()].x - vec[undertop(st)].x, 2) + pow(vec[st.top()].y - vec[undertop(st)].y, 2)) << endl;
   st.pop();

   }
      
         //cout  << sqrt(pow(vec[st.top()].x - s, 2) + pow(vec[st.top()].y, 2)) << endl;
            
   res+=d;

   cout << fixed << setprecision(3) << res << endl; 
  



}


 
 
signed main(){
   BOOST
   solve();
}
   