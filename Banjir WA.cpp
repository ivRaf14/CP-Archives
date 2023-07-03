#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;



int main(){
  int n; cin >>n;


  char arr[100][100];

  string ipt;

  int cnt, alas, kotak;
  bool lbg;

  while(n--){
    kotak = 0;
    lbg = false;
    alas = 0;  
      
    

    int p, l;
    cin >> p >> l;
    cin.ignore();
    

    for(int i=0; i<p; i++){
      cnt = 0;
      

      getline(cin, ipt);
      
      for(int j=0; j<l; j++){
        if(ipt[j] == '#') cnt++;
      }


      if(cnt == l) alas++;

      if(cnt < 2 ) lbg = true;

       if(alas == 2 && !lbg){
         kotak++;
         alas = 1;
       } 
       if(alas == 2 && lbg){
        lbg = false;
        alas = 1;
       }
       //cout << cnt << endl;
    }  
      

       
    
     if(kotak) cout << "YA" << endl;
     else cout << "TIDAK" << endl;
    //cout << "c" << alas << endl;
  }
}