#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;




int main(){
    int n; cin >> n;
    while(n--){
      int ni; cin >> ni;
      int lamp = 0;
      char ipt;
      for(int i=0; i<ni; i++){
        cin >> ipt;
        if(ipt == 'N') lamp++;
      }
      if(lamp) cout << "tidak mati lampu" << endl;
      else cout << "mungkin mati lampu" << endl;
    }
}
