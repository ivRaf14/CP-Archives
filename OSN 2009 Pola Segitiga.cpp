#include<bits/stdc++.h>

using namespace std;

int l, r, n, dummy;

void pola2kiri(int l,int r, int gasp){
    for(int i=1; i <=r ; i++){
        if(i == l || i == l + gasp || i == r- gasp || i ==r) {
            cout << "*";
            //for(int i =1; i<= gasp; i++) cout << " ";
    }
        else cout << " ";

    }
}


void polakiri(int l, int r){
    for(int i=1; i <= r; i++){
        if(i == l || i == r) cout << '*';
        else cout << " ";
    }
}


void polatengah(int l, int r){
    for(int i =1; i<= n+n -1; i++){
        if(i == l){
            for(int i = l; i<=r; i++){
                cout <<'*';
            }
        }
        else cout << " ";
    }
}


int main(){
    cin >> n;
    l = n;
    r = n;

    for(int i=1; i<= n/2 +1; i++){
        if(i == 1) {
            for(int i=1;i++;){
                if(i == n +1) {cout << '*'; break;}
                else cout <<" ";
            }
            cout << endl;
        }
        if(i >1 && i < n/2 + 1){
            polakiri(l, r);
            //polakanan(r);
            cout << endl;
        }
        if(i == n/2 + 1){
            polatengah(l,r);
            cout << endl;
        }
        l--;
        r++;
        //cout << "dd" << l << " " << r << endl;
    }
    

    for(int i =1; i<= n/2; i++){
        if(i != n/2){
            pola2kiri(l,r ,2*i);
            //pola2kanan(r,i);
            cout << endl;
            
        }
        else{
            polatengah(l,r);
        }
        l--;
        r++;
    }

}