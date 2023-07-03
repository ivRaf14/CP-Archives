#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;



int main(){
  string s; cin >> s;

  for(int i=0; i<s.size(); i++){
    if(isdigit(s[i]) || isalpha(s[i]) ){
      if(isupper(s[i])) s[i] = tolower(s[i]);
      
      
    }
    else{
      cout << "Emor tidak beruntung :(";
      return 0;
      
    }
  }

  reverse(s.begin(),s.end());

  cout << s << endl;


}
