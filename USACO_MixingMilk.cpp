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
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}
 
 
 
signed main(){
  Usaco("mixmilk");

 int c1, c2, c3;
 int a, b, c;
 cin >> c1 >> a >> c2 >> b >> c3 >> c;

 for(int i=1; i<=100; i++){
  if(i % 3 == 1){
    if(b + a <= c2){
      b+=a;
      a = 0;
    }
    else{
      a = b + a - c2;
      b = c2;
    }
  }

  if(i % 3 == 2){
    if(c + b <= c3){
      c+=b;
      b = 0;
    }
    else{
      b = c + b - c3;
      c = c3;
    }
  }
  if(i % 3 == 0){

    if(a + c <= c1){
      a+=c;
      c = 0;
    }
    else{
      c = c + a - c1;
      a = c1;

    }
  } 
 }
 cout << a << endl << b << endl << c << endl;


 
  
}