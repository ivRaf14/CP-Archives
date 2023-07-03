#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

//            kanan, bawah, kiri, atas
int baris[] = {0, 1, 0, -1};
int kolom[] = {1, 0, -1, 0};
string s;

int row  ;
int col  ;
char arr[500][500];


int maximcol, minimcol, maximrow, minimrow;


void solve(){
  row = col = maximcol= minimcol= maximrow = minimrow = 100;
  int sekarang = 0;
  int P = 0;

  arr[row][col] = s[P++];

  for(int i =1; ;i++){
    for(int arah = 1; arah<= 2; arah++){
      for(int langkah = 1; langkah<=i; langkah++){
          if(P== s.size()) return;

          row += baris[sekarang];
          col += kolom[sekarang];

          arr[row][col] = s[P++];
          

          maximcol = max(col,maximcol);
          minimcol = min(col, minimcol);
          maximrow = max(row,maximrow);
          minimrow = min(row, minimrow);
          //cout << row << " " << col << endl;
      }
      sekarang += 1 % 4 ;
      //cout  << arah<< sekarang << endl;
    }
  }


} 
int main(){
   getline(cin, s);

   solve();

   
  for(int i = minimrow; i <= maximrow; i++){
    for(int j = minimcol; j<= maximcol; j++){
      if(arr[i][j] == ' ' || !arr[i][j]) cout << '_';
      else cout << arr[i][j];
    }
    cout << endl;

  }
  
}
