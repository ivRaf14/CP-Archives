#include <bits/stdc++.h>

using namespace std;

int arr[26]={0};

int main(){
	string name1,name2,temp;
	
	cin >> name1 >> name2 >> temp;
	
	for(int i=0; name1[i] != '\0'; i++){
		arr[name1[i]-'A']++;
	}
	
	for(int i=0; name2[i] != '\0'; i++){
		arr[name2[i]-'A']++;
	}
	
   
	for(int i=0; temp[i] != '\0'; i++){
		arr[temp[i]-'A']--;
	}
	
	bool flag = false;
	for(int i=0;i<26;i++)
   {
		if(arr[i] != 0){
			flag = true;
			break;
		}
   }
	
	if(flag)cout<<"NO"<<endl;
     else cout<<"YES"<<endl;

}
