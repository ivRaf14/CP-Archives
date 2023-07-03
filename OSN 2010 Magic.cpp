#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
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
   
   int n; cin >> n;
   int arr[n][n];

   for(int i=0; i < n; i++){
    int a; cin >> a;
    arr[i][0] = a;
   }
   for(int i = n-2; i >=0; i--){
    for(int j =1; j < n-i; j++){
      arr[i][j] = arr[i+1][j-1] - arr[i][j-1];
    }
   }
   for(int i =0; i < n; i++){
    if(!i){
      cout << arr[0][i];
    }
    else cout << " "<< arr[0][i] ;
   }
   cout << endl;

}