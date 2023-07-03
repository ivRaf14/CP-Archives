#include <bits/stdc++.h>

using namespace std;



int main() 
{ 
	string s; cin >> s;
	long long int kiri_bawah_x1, kiri_bawah_y1, kanan_atas_x1, kanan_atas_y1; 
	
	cin >>kiri_bawah_x1>>kiri_bawah_y1>>kanan_atas_x1>>kanan_atas_y1;
	
	long long int kiri_bawah_x2, kiri_bawah_y2, kanan_atas_x2, kanan_atas_y2;
		cin >>kiri_bawah_x2>>kiri_bawah_y2>>kanan_atas_x2>>kanan_atas_y2;
	
	if (  (  kiri_bawah_x1  <  kanan_atas_x2 )  &&  (   kanan_atas_x1   >   kiri_bawah_x2  )  &&
       (   kiri_bawah_y1  <  kanan_atas_y2  )  &&   (   kanan_atas_y1  >  kiri_bawah_y2  )  )
        cout << "SENGKETA" << endl;
  
   
        
	else{
		cout << "DAMAI" << endl;
	}	 
	  
} 


