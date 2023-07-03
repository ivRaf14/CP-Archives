#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

const int limit = 1e6+5;

bool cmp(const pair<string,int> &a,
                   const pair<string,int> &b)
{
       return a.second>b.second;
}

int main(){
  vector<pair<string, int> > vec;

  int n; cin >> n;
  while(n--){
    string a ;int b;
    cin >> a >> b;
    vec.pb(make_pair(a,b));
  }
  sort(vec.begin(),vec.end(),cmp);

  cout << vec[vec.size()-1].first << " " << vec[0].first << endl;
  

 









  
   

}