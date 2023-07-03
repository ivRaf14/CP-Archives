#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;



int main(){
    string str; cin >> str;
    int len = str.size();
    int size = (sqrt(len));
    //cout << size * size << endl;

    if(len > size * size){
        size++;
    }
    
    str.insert(str.end(), size * size - len, '.');

    //cout <<  str ;

    bool rever = false;

    string res = "";
    for(int i=0; i < size * size; i++){
        res+= str[i];

        if(res.size() == size){
            if(rever){
                rever = false;
                reverse(res.begin(), res.end());
                cout << res << endl;
            }
            else{
                rever = true;
                cout << res << endl;
            }
            res = "";
        }
    }


}
