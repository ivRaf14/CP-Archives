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
  BOOST
 
 
 int arr[6];

for(int i=0; i <6; i++){
  cin >> arr[i];
}

int dist = sqrt( pow(arr[0]-arr[3], 2) + pow(arr[1]-arr[4], 2)  );
int sumrad = arr[2] + arr[5];

//cout << dist <<" " << sumrad << endl;
if(dist + min(arr[2], arr[5]) < max(arr[2], arr[5])){
  cout << "tidak bersentuhan" << endl;
}

else if(dist <= sumrad) cout << "bersentuhan" << endl;
else cout << "tidak bersentuhan" << endl;


}