#include<bits/stdc++.h>

using namespace std;



int main(){
	string a; cin >> a;
	string b; cin >> b;
	
	int lena = a.size();
	int lenb = b.size();
	int len;
	if(lena > lenb){
		len = a.size();
	}
	else{
		len = b.size();
	}
	int cnt=0;
	
	for(int i=0; i < len; i++){
		if(a[i] != b[i]){
			if(lena > lenb){
				a.erase(i,1);
				cnt++;	
			}
			else{
				b.erase(i,1);
				cnt++;
			}
		}
		if(cnt > 2){
			break;
		}
	}
	
	if(cnt == 1){
		cout << "Tentu saja bisa!" << endl;
	}
	else{
		cout << "Wah, tidak bisa :(" << endl;
	}
}
