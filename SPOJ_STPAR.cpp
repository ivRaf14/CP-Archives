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
   
   int n ;
   while(cin >> n){
      if(n == 0) break;

      int arr[n];
      stack<int> st, que;
      
      que.push(0);

      bool ans = true;

      for(int i=0; i < n; i++){
         cin >> arr[i];
      }

      for(int i=0; i < n; i++){
         if(arr[i] - que.top() == 1){
            que.push(arr[i]);
         }
         else{
            if(st.empty()) st.push(arr[i]);
            else {
               while(!st.empty() && ((st.top() - que.top() ) == 1)){
                  que.push(st.top());
                  st.pop();
               }
               st.push(arr[i]);
            }
            
         }
      }
        // for (std::stack<int> dump = st; !dump.empty(); dump.pop())
        //  std::cout << dump.top() << '\n';
      
      while(!st.empty()){
         if((st.top() - que.top()) == 1){
            que.push(st.top());
            st.pop();
         }
         else break;
      }

      cout << (st.empty() ? "yes" : "no") << endl;

      
   }
  

}

   
  



