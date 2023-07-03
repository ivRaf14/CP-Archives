#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;


int main(){
    int aq; int n;
    cin >> aq >> n;
    map<string, int>set;

    for(int i=1; i<=n; i++){
        
        
        string ipt; cin >> ipt;
        set[ipt]++;
        

        if(set[ipt] > 1){
            cout << "BELI BARU" << endl;
            cout << i << endl;
            return 0;
         }
         if(i % aq == 0){
            set.clear();
        }
    }
    cout << "BENAR" << endl;    

}