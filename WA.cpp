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
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

struct data
{
  int start,end, bucket;
};

bool cmp(const data&a, const data&b){
  return a.start < b.start;
}
 signed main(){
  BOOST
  Usaco("blist");

  int n; cin >> n;
  vector<data>vec;
  int lim = 0;
  for(int i =0; i <n; i++){
    int a, b, c;
    cin >> a >> b >> c;
    vec.pb({a,b,c});
  }
  sort(vec.begin(), vec.end(), cmp);
  // for(int i=0; i <n; i++){
  //   cout << vec[i].start << " " << vec[i].end <<" " <<vec[i].bucket << endl;
  // }
  int need = 0;
  int buck_now = 0;
  int time_now = 0;
  int buck_prev = 0;

   // for(int i = 0; i <n; i++){
   //   if(vec[i].start < time_now){
   //    if(vec[i].bucket > buck_prev) need+= (vec[i].bucket-buck_prev);
   //   }

   //   else{
   //    if(buck_now < vec[i].bucket) need+= vec[i].bucket - buck_now;
   //   }
   //   //cout << need << endl;
   //   buck_prev = buck_now;
   //   time_now = vec[i].end;
   //   buck_now = need;
   // }
   cout << need << endl;

  



}