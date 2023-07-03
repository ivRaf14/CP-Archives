#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n; cin >> n;
	stack<int> st;
	
	string perintah;
	int data;
	int maxim = 0;
	
	while(n--){
		cin >> perintah;
		
		if(perintah == "TAMBAH"){
			cin >> data;
			st.push(data);
		}
		else if(perintah == "HAPUS"){
			st.pop();
		}
		
		else if(perintah == "MAXIMUM"){
			cout <<"Nilai maksimum dari tumpukan angka adalah " << maxim << endl;
		}
		
		if(!st.empty() && st.top() > maxim){
			maxim = st.top();
		}
	}	

    

	
	
	
	
}
