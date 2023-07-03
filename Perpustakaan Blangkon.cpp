#include <bits/stdc++.h>

using namespace std;





int main(){

int n; cin >> n;

int cnt = 1;
map<string, int> mp;

cin.ignore();
for(int i=0; i <n; i++){
    char a[1000]; 
    
    cin.getline(a,1000);
    mp[a]++;

}

//for(auto it = mp.begin(); it != mp.end(); ++it){
//    cout << it->first <<" " << it->second << " ";
//}
//cout << endl;


string ipt; char kedua[1000];
while(true){
    
   cin >> ipt;
   
    if(ipt == "CL") break;
    else{
       cin.ignore(); 
      cin.getline(kedua, 1000);
       //cout << kedua; 
        if(ipt[1] == 'M'){
            if(mp[kedua] > 0){
                cout << "Pelanggan ke-"<<cnt++<<" : Buku Tersedia & Berhasil Dipinjam" << endl;
                mp[kedua]--;
            }
            else cout << "Pelanggan ke-"<<cnt++<<" : Maaf Buku Anda Tidak Tersedia, Silahkan Kembali Minggu Depan" << endl;

            
        }
        else if(ipt[1] == 'B'){
            cout << "Pelanggan ke-"<<cnt++<<" : Terima Kasih Telah Membaca :)" << endl;
            mp[kedua]++;

        }
        

    }
    
}






}