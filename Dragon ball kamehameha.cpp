#include <bits/stdc++.h>
using namespace std;



int main()
{
	int n; cin >> n;
	int a;
	string s = "kamehameha";
	string total = "";
	while(n--){
		cin >> a;
		
		for(int i = 0; i < s.size(); i++){
			total.push_back(s[i]);
			if(s[i]== 'a'){
				for(int j = 1; j < a; j++){
					total.push_back('a');
				}
			}
			else if(s[i]== 'e'){
				for(int j = 1; j < a; j++){
					total.push_back('e');
				}
			}
		}
		cout << total << endl;
		total = "";
	}
	
}
