#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;




int main(){
    string ipt;
   for(int i = 1; i<=3; i++){
        getline(cin, ipt);

        string pare = ipt.substr(0, 3);
        string com = ipt.substr(4, 3);
        //cout << pare << endl << com << endl;
        if(pare != com){
            cout << "Geleng-Geleng" << endl;
            return 0;
        }
   }

   cout << "Angguk-Angguk" << endl;
}
