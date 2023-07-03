#include <iostream>
#include<bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    /*char a[10000]; cin >> a;
    char b[10000]; cin >> b;
    string total;
    
    int length = strlen(a);
    
    
    for(int i= length-1; i >= 0; i--){
    	 total.push_back(a[i]);
	}
	
	if(total == b){
		cout << "YES";
	}
	else{
		cout << "NO";
	}*/
	string str,tmp;
    cin >> str;
    cin >> tmp;
    reverse(tmp.begin(),tmp.end());
    if(str == tmp)cout << "YES" << endl;
    else cout << "NO" << endl;
    	
	
	
    
    
    return 0;
}
