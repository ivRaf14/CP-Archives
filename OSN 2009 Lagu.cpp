#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[100005];

int main(){
    int n; cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    if(n == 1) cout << arr[0] << endl;

    for(int i=1; i<n; i+=2){
        cout << arr[i] << endl;

        cout << arr[i-1] << endl;

        if(n % 2 == 1 && i == n-2){
            cout << arr[i+1] << endl;
        }
    }
}
