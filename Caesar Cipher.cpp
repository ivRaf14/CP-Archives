#include<bits/stdc++.h>

using namespace std;

int main(){
   
   string s; cin >> s;
   int n = s.size();
   int plus; cin >> plus;
   
   for(int i=0; i < n; i++){
   		if(isalpha(s[i])){
   			if(islower(s[i])){
   				s[i] = ((s[i]+plus-97)%26 +97);
			   }
			
			else if(isupper(s[i])){
				s[i] = ((s[i]+plus-65)%26 +65);
			   }
			}
		}
	
		   
		 
   
   cout << s << endl;
   
}
// 124
//  98
//  26
