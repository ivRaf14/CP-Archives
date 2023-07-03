#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;


int main(){
    string dum; cin >> dum;
    int n; cin >> n;
    map<ll, int>mp;

    ll h = 0;
    while(n--){
        ll ipt; cin >> ipt;
        mp[ipt]++;
    }

    for(auto it = mp.begin(); it!= mp.end(); it++){
        if(it ->second > it->first){
            cout << -1 << endl;
            return 0;
        }
        else h+= it->first;
    }
    cout << h << endl;
}
