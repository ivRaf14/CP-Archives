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
 ll res = 0;
 ll sum = 0;

 for(int i=0; i < n; i++){
  cin >> arr[i];
 }
 sort(arr, arr+n);
 
 for(int i=0; i < n-1; i++){
  sum+=arr[i];
  res+= arr[i+1] *(i+1) - sum; 
 }
 cout << res << endl;

}