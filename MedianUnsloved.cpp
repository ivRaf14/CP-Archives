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
// 1sec -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

 
priority_queue<int> leftside;
priority_queue<int, vector<int>, greater<int>> rightside;

void solve(){
   int n; cin >> n;
   for(int i=1; i<=n; i++){
      int ipt; cin >> ipt;

      if(leftside.empty())leftside.push(ipt);
      else if(!leftside.empty() && leftside.top() > ipt){
         leftside.push(ipt);
      }
      else rightside.push(ipt);

      if(leftside.size() > rightside.size() + 1){
         rightside.push(leftside.top());
         leftside.pop();
      }

      else if(rightside.size() > leftside.size() + 1){
         leftside.push(rightside.top());
         rightside.pop();
      }

      if(i % 2 == 1){
         if(rightside.size() > leftside.size()){
            cout << rightside.top()<< endl;
         }
         else{
             cout << leftside.top()<< endl;
         }
      }
      else{
         if(abs((rightside.top() + leftside.top())) % 2 == 1){
            cout << (rightside.top() + leftside.top())/ 2 << ".5" << endl;
         }
         else cout << (rightside.top() + leftside.top())/ 2<< endl;
      }

   }  


}


 
 
signed main(){
   BOOST
   solve();
}
   
 
  
