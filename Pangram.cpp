#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int cnt[26] = {0};

    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        int index = s[i] - 'a';
        cnt[index]++;
       
    }
    bool f = true;
    for(int i = 0; i < 26; ++i){
         if(cnt[i] == 0){
             f = false;
             break;
         }
        }
    
    
    if(f){
        cout<<"pangram";
    }
    else{
        cout<<"not pangram";
    }
    return 0;
}
