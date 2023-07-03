#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


int main(){
  BOOST
  int y; cin >> y;

  while(true){
    y+=1;
    //1988
    int a = y/1000; // 1
    int b = y /100 % 10 //9;
    int c = y / 10 % 10//8;
    int d = y % 10;//8
    //cout << a << b << c << d << endl;

    if(a!=b && a!=c && a!=d && b!=c&& b!=d && c!=d) break;

  }
  cout << y << endl;


 









  
   

}