#include <iostream>

using namespace std;

int main(){
	int waktu, jam, menit, detik;
	cin >> waktu;
	
	jam = waktu / 3600;
	waktu %= 3600 ;
	
	menit = waktu / 60;
	waktu %= 60;
	
	detik = waktu/1;
	waktu %= 1;
	
	cout << jam << endl;
	cout << menit << endl;
	cout << detik << endl;
	
	
	
	
	
}
