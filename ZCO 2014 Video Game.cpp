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
  int n, h;
  cin >> n >> h;
  int arr[n];
  bool box = false;
  int index = 0;

  for(int i=0; i < n; i++){
    cin >> arr[i];
  }
  int ipt;
  while(cin >> ipt){
    if(ipt == 0) break;

    if(ipt == 3 && !box && arr[index] != 0){
      box = true;
      arr[index]--;
    }
    if(ipt == 2 && index != n-1) index++;

    if(ipt == 4 && box && arr[index] < h){
      arr[index]++;
      box = false;
    }
    if(ipt == 1 && index != 0)index--;
  }
  for(int i=0; i < n ;i++){
    cout << arr[i] << " ";
  }
  cout << endl;

 

}