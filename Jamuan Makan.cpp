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
const int M = 1e6;

bool cmp(pair<int, int> a, pair<int, int>b){
  return a.second < b.second;
}

int main()
{
  int n; cin >> n;
   vector< pair<int, int> > vec;
   for(int i=0; i < n; i++){
    int a, b;
    cin >> a >> b;
    vec.pb(make_pair(a,a+b));
   }

   sort(vec.begin(), vec.end(), cmp);

  // for(int i = 0; i < n; i++){
  //   cout << vec[i].first << " " << vec[i].second <<endl;
  // }
  int time_now = 0;
  int people = 0;

  for(int i=0; i < n; i++){
    if(vec[i].first >= time_now){
      time_now = vec[i].second;
      people++;
    }
  }
  cout << people << endl;

}