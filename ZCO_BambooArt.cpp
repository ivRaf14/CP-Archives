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
   BOOST
   int n;
   cin >> n;
   int arr[n];
   
   map<int,int>dupli;
   int cnt;
   int res = 0;

   

   for(int i=0; i < n; i++){
      cin >> arr[i];
      dupli[arr[i]]++;
   }
   sort(arr, arr+n);

    for(int i=0; i < n-1; i++){

       for(int j= i+ 1; j < n; j++){

          int pat = arr[j] - arr[i];
          cnt = 2;

          if(pat > 0){
            int num = arr[j] + pat;
             while(dupli.find(num) != dupli.end()){
               cnt++;
               num+=pat;
             }

             
          }
          else if(pat == 0){
            cnt = dupli[arr[i]];
          }

         res = max(res, cnt);
            
         
         
          
       }

    }
    cout << res << endl;





}