#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


int main(){
  BOOST
  int a, b; cin >> a >> b;
  int rem = 240 - b;
  int div = 5;
  int cnt = 0;
  int sum = 0;

  while(a--){
    if(sum + div <= rem){
      sum+=div;
      cnt++;
      div+=5;
    }
    else break;
  }
  cout << cnt << endl;


 









  
   

}