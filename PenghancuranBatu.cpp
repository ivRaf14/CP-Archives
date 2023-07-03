#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;
//int range 1e9
//ll range 1e18
//double > float
// O(n) -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

 
 
void solve(){
   

}
 
 
signed main(){
   int n; cin >> n;
   vector<pair<int,int>>vec;
   int left[n];
   int right[n];

   for(int i=0; i < n; i++){
      int a; cin >> a;
      vec.pb({a,i});
   }
   stack< pair<int,int> >st, st2;

   for(int i=0; i < n; i++){
      if(st.empty()) st.push({vec[i].fi, vec[i].se});
      else{
         while(1){
            if(!st.empty() && vec[i].fi >= st.top().fi){
               left[st.top().se] = vec[i].fi;
               st.pop();
            }
            else break;
         }
      }
      st.push({vec[i].fi, vec[i].se});
   }
   while(!st.empty()){
      left[st.top().se] = INT_MAX;
      st.pop();
   }

   for(int i=n-1; i>= 0; i--){
      if(st2.empty()) st2.push({vec[i].fi, vec[i].se});
      else{
         while(1){
            if(!st2.empty() && vec[i].fi > st2.top().fi){
               right[st2.top().se] = vec[i].fi;
               st2.pop();
            }
            else break;
         }
      }
      st2.push({vec[i].fi, vec[i].se});
   }
   while(!st2.empty()){
      right[st2.top().se] = INT_MAX;
      st2.pop();
   }
   // for(int i=0; i < n; i++){
   //    cout << left[i] << " " << right[i] << endl;
   // }

   ll res = 0;
   int ans[n];

   for(int i=0; i < n; i++){
      if(left[i] == INT_MAX && right[i] == INT_MAX) continue;
      res += min(left[i], right[i]);
      
   }
   cout << res << endl;
}
   
 
  