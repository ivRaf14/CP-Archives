#include <bits/stdc++.h>
using namespace std;

 

int main()
{
    string s;
	char cek = 'O';
	int check = 0;
    
    cin >> s;
    for(int i =0 ; i < s.size(); i++){
    	if(s[i]== cek){
    		check++;
		}
    	
    	
	}
	if(check == 1){
		cout << "Ya" << endl;
	}
	else{
		cout << "Tidak" <<endl;
	}
    
}

