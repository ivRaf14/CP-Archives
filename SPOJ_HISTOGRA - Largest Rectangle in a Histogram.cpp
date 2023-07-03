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
// O(n) -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}
 
 
void solve(int n){
   int arr[n];
   int left[n];
   int right[n];

   stack<int>st;
   stack<int>st2;

   for(int i=0; i < n; i++){
      cin >> arr[i];
   }
   for(int i=0; i < n; i++){

      while(1){
         if(st.empty()){
            left[i] = 0;
            break;
         }
         else if(arr[st.top()] < arr[i]){
            left[i] = st.top() + 1;
            break;
         }
         else{
            st.pop();
         }
      }
      st.push(i);
   }
   

   for(int i= n-1; i >=0; i--){
       while(1){
         if(st2.empty()){
            right[i] = n-1;
            break;
         }
         else if(arr[st2.top()] < arr[i]){
            right[i] = st2.top() - 1;
            break;
         }
         else{
            st2.pop();
         }
      }
      st2.push(i);
   }
   // for(int i=0; i < n; i++){
   //    cout << left[i] << " " << right[i] << endl;
   // }
   int res = 0;
   for(int i=0; i < n; i++){
      int total = (right[i] - left[i] + 1) * arr[i];
      res = max(res, total);
   }
   cout << res << endl;


}
 
 
signed main(){
  int n;
  
  while(cin >> n){
    if(n == 0) break;

    solve(n);
  }
}
   
 
  