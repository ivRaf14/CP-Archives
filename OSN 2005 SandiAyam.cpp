#include <bits/stdc++.h>
#define int long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;
//int range 1e9
//ll range 1e18
//double > float
// 1sec -> 1e8
const int SS = 1e6 + 10;
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

string addbignum(string num1, string num2){
   string result = "";
        int len1 = num1.size();
        int len2 = num2.size();
        int carry = 0;
        for (int i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry == 1; i--, j--) {
            int x = i < 0 ? 0 : num1[i] - '0';
            int y = j < 0 ? 0 : num2[j] - '0';
            //cout << x << " " << y << endl;
            result.append(to_string((x + y + carry) % 10));
            carry = (x + y + carry) / 10;
        }
        return string(result.rbegin(), result.rend());  
}

string multibignum(string a, string b){
   int lena = a.size(), lenb = b.size();
   int arr[lena+lenb] = {0};

   for(int i = lena - 1; i >=0; i--){
      for(int j = lenb - 1; j >=0; j--){
         int mul = (a[i] - '0') * (b[j] - '0');
         int sum = arr[i + j + 1] + mul;
         arr[i + j] += sum / 10;
         arr[i + j+1] = sum % 10;
      }
   }
   string res = "";
   bool leadzero = true;

   for(int it : arr){
      if(it != 0) leadzero = false;
      if(!leadzero) res.pb(it + '0');
   }
   return (res != "" ? res : "0");
}
 
 
void solve(){
   string c;
   stack<string>st;

   while(getline(cin,c)){
    if(c == "")st.push("end");
    else st.push({c});
   }

    // while(!st.empty()){
    //  cout << st.top() << endl;
    //  st.pop();
    // }

   string res = "0";
   string multiple = "1";
   int level = 0;
   vector<int> operate;

   while(!st.empty()){
      if(st.top() == "." ||st.top() == ".." ||st.top() == "..." ||st.top() == "...."){
         level+=st.top().size();
      }

      else if(st.top() == "-"){
         level+=5;
      }

      else if(st.top() == "0"){
         level+=0;
      }
      else if(st.top() == "end"){
        operate.pb(level);
        level = 0;
      }

      

      st.pop();
      //cout << res << endl;

   }
   operate.pb(level);

     // for(auto it : operate){
     //    cout << it << " ";
     // }

   for(int i = 0; i < operate.size(); i++){

      if(i == 0) multiple = "1";
      else if(i == 2) multiple = multibignum("18", multiple);
      else multiple = multibignum("20", multiple);
      res = addbignum(res, multibignum(to_string(operate[i]), multiple));
   }
   cout << res << endl;

   


}



 
 
signed main(){
   BOOST
   solve();
}