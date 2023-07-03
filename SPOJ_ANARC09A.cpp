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
   BOOST
   

   string s;
   int cs = 1; 
   while(cin >> s){
      if(s[0] == '-') break;

      stack<char>st;
      int res = 0;
     

      for(int i=0; i < s.size(); i++){
         if(st.empty()) st.push(s[i]);
         else{
            if(s[i] == '{')st.push(s[i]);
            else{
               if(st.top() == '{') st.pop();
               else st.push(s[i]);
            }
         }
      }
      while(!st.empty()){
         char idx = st.top();
         st.pop();

         if(st.empty()){
   
            break;
         }

         if(st.top() == idx){
            res++;
         }
         else{
            res+=2;
         }
         st.pop();
      }
      cout << cs++ << ". " << res << endl;
   }
   

}

   
  



