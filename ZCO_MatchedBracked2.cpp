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

const int limit = 1e6+5;
const int bat = 1e6;
const int int_range = 1e9;



int main(){
   int n; cin >> n;
   int arr[n];
   stack<int>rou, squ, dep;
   
   int rou_len, squ_len, depth_max;
   rou_len = squ_len = depth_max = 0;
   
   dep.push(0);rou.push(0);squ.push(0);

   for(int i=1; i <= n; i++){
      int ipt; cin >> ipt;

      if(ipt == 1){
         

         if(squ.top() >= rou.top()) dep.push((dep.top() + 1));
         else dep.push(dep.top());
         rou.push(i);
      }
      else if(ipt == 2){
         rou_len = max(rou_len, i - rou.top() + 1);
         rou.pop();
         dep.pop();
      } 
      else if(ipt == 3){
         
          if(rou.top() >= squ.top()) dep.push(dep.top() + 1);
          else dep.push(dep.top());
          squ.push(i);
      }
      else if(ipt == 4){
         squ_len = max(rou_len, i - squ.top() + 1);
         squ.pop();
         dep.pop();

      }
      depth_max = max(depth_max, dep.top());
   }

   cout << depth_max << " " << rou_len << " " << squ_len << endl;




}