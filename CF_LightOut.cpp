#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;
//int range 1e9
//ll range 1e18
//double > float
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

int arr[3][3];



void cek(int i ,int j, int much){
    
  arr[i][j] = (arr[i][j]+1) % 2;
  if(j + 1 <= 2) arr[i][j+1] = (arr[i][j+1] + 1) % 2;
  if(j -1 >= 0) arr[i][j-1] = (arr[i][j-1] + 1) % 2;
  if(i -1 >= 0) arr[i-1][j] = (arr[i-1][j] +1) % 2;
  if(i + 1 <= 2) arr[i+1][j]= (arr[i+1][j] + 1) % 2;
}


signed main(){
  
  for(int i=0; i < 3; i++){
    for(int j=0; j < 3; j++){
      arr[i][j] = 1;
    }
  }
  

  for(int i=0; i < 3; i++){
    for(int j=0; j < 3; j++){
      int much; cin >> much;

       if(much % 2 == 1)cek(i, j, much);
       

    }
  }

  for(int i=0; i < 3; i++){
    for(int j=0; j < 3; j++){
      cout << arr[i][j];
    }
    cout << endl;
  }

  

}

   
  



