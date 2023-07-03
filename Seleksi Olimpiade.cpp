#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


bool cmp(const pair<string, pair<int, pair<int, int> > >  &a, 
  const pair<string, pair<int, pair<int, int> > >  &b){
  return (a.second.second.second > b.second.second.second);
}

int main(){

  BOOST

  vector<pair<string, pair<int, pair<int, int> > > > data;
  
  int n; cin >> n;
  while(n--){
    int N, Mit;
    cin>> N >> Mit;
    string ipt; cin >> ipt;

    while(N--){
      string a;
      int b, c, d;
      cin >> a >> b >> c >> d;
      data.pb(mp(a,mp(b, mp(c, d))));
      
    }
    sort(data.begin(), data.end(), cmp);

    // for(int i =0; i< vec.size(); i++){
    //   if(vec[i].second == vec[i+1].second){
    //     sort(data.begin()+i, data.end(), cmp);
    //   }
    // }

  //   for(int i=0; i<data.size(); i++){
  //     cout << data[i].first << endl;

  // }
    for(int i=0; i<data.size(); i++){
      if(data[i].first == ipt){
        if(i +1<= Mit){
          cout << "YA" << endl;
        }
        else cout << "TIDAK" << endl;
      }
    }
  data.clear();
    }

} 
