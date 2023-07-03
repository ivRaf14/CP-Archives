#include <bits/stdc++.h>
using namespace std;

 

int main()
{
    string sos = "SOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOSSOS";
    string signal;
    cin >> signal;
    int cnt = 0;
    
    for(int i=0; i < signal.size(); i++){
    	if(signal[i] != sos[i]){
    		cnt++;
		}
	}
	cout << cnt;
}

