#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int cnt[26];
    for(int i =0; i < 26; ++i)
        cnt[i] = 0;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cnt[s[i] - 'a']++;
        }
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cnt[s[i] - 'A']++;
        }
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
