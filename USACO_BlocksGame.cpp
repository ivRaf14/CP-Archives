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
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

signed main(){
  Usaco("blocks");
  map<int, int> per, ked, res;
  
  for(int i=0; i < 26; i++){
    res[i] = 0;
  }

  int n; cin >> n;
  while(n--){
    string a, b;
    cin >> a >> b;

    for(int i=0; i < a.size(); i++){
      per[a[i] - 'a']++;
    }
    for(int i=0; i < b.size(); i++){
      ked[b[i] - 'a']++;
    }
    for(int i=0; i < 26; i++){
      res[i] += max(per[i], ked[i]);
    }
    per.clear();
    ked.clear();
  }
  for(auto &x : res){
    cout << x.se << endl;
  }
  
}

   
  



