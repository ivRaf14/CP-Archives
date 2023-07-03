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
   
   string s; cin >> s;
   stack<int>st;
   
   //CO(CO2H)3

   for(int i=0; i < s.size(); i++){
      if(s[i] != ')'){
         if(s[i] == 'C') st.push(12);
         else if(s[i] == 'H')st.push(1);
         else if(s[i] == 'O') st.push(16);
         else if(s[i] == '(') st.push(s[i]);
         else{
            int res = st.top() * (s[i] - '0');
            st.pop();
            st.push(res);
         }
      }
      else if(s[i] == ')'){
         int count = 0;

         while(!st.empty()){
            if(st.top() == '('){
               st.pop();
               st.push(count);
               break;
            }
            count+=st.top();
            st.pop();
         }

      }
   }
   int ans = 0;
   while(!st.empty()){
      ans+= st.top();
      st.pop();
   }
   cout << ans << endl;

}

   
  



