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



int main(){
 int a;
 float b;
 cin >> a >> b;

 if(a % 5 == 0){
  if(a <= b - 0.50) cout  << fixed << setprecision(2)<< b-0.50 - a << endl;
  else cout << fixed << setprecision(2)<< b << endl; 
 }
 else cout << fixed << setprecision(2)<< b << endl;
  

 









  
   

}