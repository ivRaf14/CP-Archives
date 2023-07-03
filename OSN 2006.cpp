#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;


int main(){
     map<string,int> vec;
    
    vec["c."] = 1;
   vec["c#"]=2;
    vec["d."]=3;
    vec["d#"]=4;
    vec["e."]=5;
    vec["f."]=6;
    vec["f#"]=7;
    vec["g."]=8;
    vec["g#"]=9;
    vec["a."]=10;
    vec["a#"]=11;
    vec["b."]=12;
    vec["C."]=13;
    vec["C#"]=14;
    vec["D."]=15;
    vec["D#"]=16;
    vec["E."]=17;
    vec["F."]=18;
    vec["F#"]=19;
    vec["G."]=20;
    vec["G#"]=21;
    vec["A."]=22;
    vec["A#"]=23;
    vec["B."]=24;
    
    


    string ipt; cin >> ipt;
    vector<int>hasil;

    string pen = ipt.substr(0,2);

    int len = ipt.size();
    for(int i=2; i<len; i+= 2){
        hasil.pb(vec[ipt.substr(i,2)] - vec[pen]);
        pen = ipt.substr(i,2);
      

      
      
    }
    // for(int i=0; i< hasil.size();i++){
    //     cout << hasil[i] << " ";
    // }
    // cout << endl;
    int n; cin >> n;

    for(int idx=1; idx<=n; idx++){
        string s; cin >> s;

        int j=0 ;
        int result =0;
        string diff = s.substr(0,2);

        if(s.size()>= ipt.size()){
            
            for(int i=2; i< s.size(); i+=2){
                if((vec[s.substr(i,2)] - vec[diff]) == hasil[j]){
                    j++;
                    result++;
                }
                // else if((vec[s.substr(i,2)] - vec[diff]) != hasil[j]){
                //     result = 0;
                // }
                if(result == hasil.size()){
                    cout << idx << endl;
                    return 0;

                }
                //cout << (vec[s.substr(i,2)] - vec[diff]) << endl;
                diff = s.substr(i,2);
            }
        }
    }
    cout << "#" << endl;

}