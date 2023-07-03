#include <bits/stdc++.h>
#define int long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
//int range 1e9
//ll range 10e18
//double > float


// const int limit = 1e6+5;
// const int bat = 1e6;
// const int int_range = 1e9;
  const int MA = 1e8;
/*
1 1 1 = 1 2   2 4
              1 2
              1 2
1 1 1 = 1 2
2 3 1 = 2 4
sort des;

*/
int res[MA];

signed main(){
   BOOST
   
   int n, m;
   cin >> n >> m;
   int arr[n];
   queue<int>main;
   queue<int>sub;
   
   
   
   for(int i=0; i < n; i++){
    cin >> arr[i];
   }

   sort(arr, arr + n, greater<int>());

   for(int i=0; i < n; i++){
    main.push(arr[i]);
   }

   for(int i = 1; i <= MA; i++){
    if(sub.empty()){
      if(main.empty())break;

      res[i] = main.front();
      main.pop();
      
    }
    
    else if(main.empty()) {
      if(sub.empty())break;

      res[i] = sub.front();
      sub.pop();
      
    }
    else{
      if(main.front() >= sub.front()){
        res[i] = main.front();
        main.pop();
      }
      else{
        res[i] = sub.front();
        sub.pop();
      }
      
    }
    if(res[i] / 2 > 0) sub.push(res[i]/2);
   }

   for(int i = 1; i<=m; i++){
    int l; cin >> l;
    cout  << res[l] << endl;
   }

   




}