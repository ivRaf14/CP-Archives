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

bool cmp(pair<double, double>a, pair <double , double>b){
  return a.second > b.second;
}

int main(){
   int n, x;
   cin >> n >> x;
   int har[n], ber[n];

   vector< pair<double, double> > vec;

   for(int i=0; i < n; i++){
    cin >> ber[i];
   }
   for(int i=0; i < n; i++){
    cin >> har[i];
   }
   for(int i=0; i < n; i++){
    vec.pb(mp((double)ber[i], (double)har[i]/(double)ber[i]));
   }

   sort(vec.begin(), vec.end(), cmp);

   // for(int i=0; i< n; i++){
   //  cout << vec[i].fi << " " << vec[i].se << endl;
   // }
   int berat = 0;
   double res = 0;

    for(int i=0; i < n; i++){
      if(berat + vec[i].fi <= x){
        res+= vec[i].fi * vec[i].se;
        berat+=vec[i].fi;
        if(berat == x) break;
      }
      else if(berat + vec[i].fi > x){
        
        res+= (x-berat) * vec[i].se;
        break;
      }

    }
    cout << fixed << setprecision(5) << res << endl;


   
   

}