#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll arr[100005];

int main(){
    int n; cin >> n;

    for(int i = 0; i <n; i++){
        cin >> arr[i];
    }

    bool cek = true;
    for(int i=1; i < n-1; i++){

        if((arr[i-1] > arr[i] && arr[i] < arr[i+1]) || (arr[i-1] < arr[i] && arr[i] > arr[i+1])){
            continue;
        }
        else{
            cek = false;
            cout << arr[i-1] <<" " << arr[i] << " " <<arr[i+1] << endl;
            break;
        }
    }

    if(cek) cout << "ZIGZAG" << endl;


}
