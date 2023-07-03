#include <bits/stdc++.h>
#define int long long
#define mp make_pair
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;
//int range 1e9
//ll range 1e18
//double > float
// 1sec -> 1e8
const int MOD = 1e9 + 7;

void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

int search(string from, string to, string op){
   string arr[12] = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
   int st = 0;

   

   for(int i=0;  i < 12; i++){
      if(arr[i] == from){
         st = i;
         break;
      }
   }
   int cnt = 0;

   for(int i = st+1; ; i++){
      i%=12;

      if(arr[i] == to){
         cnt++;
         break;
      }
      else cnt++;
   }
   

   if(op == "previous"){
      int has = -1 * (12 - cnt);
      if(!has) return cnt;
      else return -12;
   }
   else return cnt;
}


void solve(){
   int n; cin >> n;
   cin.ignore(1, '\n');
   map<string, pair<string,int>>mp;
   map<string,string>born;

   born["Bessie"] = "Ox";

   for(int i=0; i < n; i++){
      string s; getline(cin,s);
      string temp = "";
      vector<string> vec;
      vec.resize(5);
      int cnt = 0;

      for(char c : s){

         if(c == ' '){
            cnt++;
            
            if(cnt == 1 || cnt == 4 || cnt == 5){
               vec.pb(temp);
               //cout << temp << cnt << endl;
            }

         temp = "";

         }

         else if(isalpha(c)) temp+=c;

      }

      vec.pb(temp);

      //cout << "fffsfsf" <<vec[0] << endl;

      // for(int i=0; i < vec.size(); i++){
      //    cout << i <<vec[i] << " ";
      // }
      // cout << endl;

       int has= search(born[vec[8]], vec[7], vec[6]);
      mp[vec[5]].fi = vec[8];
      mp[vec[5]].se = has;
      born[vec[5]] = vec[7];

   }

   // for(auto it : mp){
   //    cout << it.fi << " " << it.se.fi << " " << it.se.se << endl;
   // }

   int ans = mp["Elsie"].se;
   string idx = mp["Elsie"].fi;

   while(idx != "Bessie"){
      ans+=mp[idx].se;
      idx = mp[idx].fi;
      //cout << ans <<" " << idx << endl;
   }
   cout << abs(ans) << endl;








}






signed main(){
   BOOST
   //Usaco("citystate");
    solve();
   
   
}

   
 
  