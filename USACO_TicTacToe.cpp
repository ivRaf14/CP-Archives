#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;
//int range 1e9
//ll range 10e18
//double > float
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}
bool per[100];
bool ked[100][100];


void cek(char arr[5][5], int &one, int &two){
  //vertical
  if(arr[0][0] == arr[2][0] || arr[1][0] == arr[0][0] || arr[1][0] == arr[2][0]){
    if(arr[0][0] == arr[2][0] && arr[1][0] == arr[0][0] && arr[1][0] == arr[2][0]){
      if(!per[arr[0][0]-'A']){
        one++;
        per[arr[0][0]-'A'] = true;
      }
    }
    else{
      char it;
     if(arr[0][0] == arr[1][0]) it = arr[2][0];
     else it = arr[1][0];

     if(!ked[it - 'A'][arr[0][0] - 'A'] && !ked[arr[0][0] - 'A'][it - 'A']){
      two++;
      ked[it - 'A'][arr[0][0] - 'A'] = true;
      ked[arr[0][0] - 'A'][it - 'A'] = true;
     }
    }
  }

  if(arr[0][1] == arr[1][1] || arr[1][1] == arr[2][1] || arr[2][1] == arr[0][1]){
    if(arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[2][1] == arr[0][1]){
      if(!per[arr[0][1]-'A']){
        one++;
        per[arr[0][1]-'A'] = true;
      }
    }
    else{
      char it;
     if(arr[0][1] == arr[1][1]) it = arr[2][1];
     else it = arr[1][1];

     if(!ked[it - 'A'][arr[0][1] - 'A'] && !ked[arr[0][1] - 'A'][it - 'A']){
      two++;
      ked[it - 'A'][arr[0][1] - 'A'] = true;
      ked[arr[0][1] - 'A'][it - 'A'] = true;
     }
    }
  }
  
  if(arr[0][2] == arr[1][2] || arr[1][2] == arr[2][2] || arr[2][2] == arr[0][2]){
    if(arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[2][2] == arr[0][2]){
     if(!per[arr[0][2]-'A']){
        one++;
        per[arr[0][2]-'A'] = true;
      }
    }
    else{
      char it;
     if(arr[0][2] == arr[1][2]) it = arr[2][2];
     else it = arr[1][2];

     if(!ked[it - 'A'][arr[0][2] - 'A'] && !ked[arr[0][2] - 'A'][it - 'A']){
      two++;
      ked[it - 'A'][arr[0][2] - 'A'] = true;
      ked[arr[0][2] - 'A'][it - 'A'] = true;
     }
    }
  }

  // diagonal
  if(arr[0][0] == arr[1][1] || arr[1][1] == arr[2][2] || arr[2][2] == arr[0][0]){
    if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == arr[0][0]){
      if(!per[arr[0][0]-'A']){
        one++;
        per[arr[0][0]-'A'] = true;
      }
    }
    else{
      char it;
     if(arr[0][0] == arr[1][1]) it = arr[2][2];
     else it = arr[1][1];

     if(!ked[it - 'A'][arr[0][0] - 'A'] && !ked[arr[0][0] - 'A'][it - 'A']){
      two++;
      ked[it - 'A'][arr[0][0] - 'A'] = true;
      ked[arr[0][0] - 'A'][it - 'A'] = true;
     }
    }
  }

  if(arr[0][2] == arr[1][1] || arr[1][1] == arr[2][0] || arr[0][2] == arr[2][0]){
    if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] == arr[2][0]){
      if(!per[arr[0][2]-'A']){
        one++;
        per[arr[0][2]-'A'] = true;
      }
    }
    else{
      char it;
     if(arr[0][2] == arr[1][1]) it = arr[2][0];
     else it = arr[1][1];

     if(!ked[it - 'A'][arr[0][2] - 'A'] && !ked[arr[0][2] - 'A'][it - 'A']){
      two++;
      ked[it - 'A'][arr[0][2] - 'A'] = true;
      ked[arr[0][2] - 'A'][it - 'A'] = true;
     }
    }
  }

  //horizontal
  if(arr[0][0] == arr[0][1] || arr[0][1] == arr[0][2] || arr[0][2] == arr[0][0]){
    if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][2] == arr[0][0]){
      if(!per[arr[0][0]-'A']){
        one++;
        per[arr[0][0]-'A'] = true;
      }
    }
    else{
      char it;
     if(arr[0][0] == arr[0][1]) it = arr[0][2];
     else it = arr[0][1];

     if(!ked[it - 'A'][arr[0][0] - 'A'] && !ked[arr[0][0] - 'A'][it - 'A']){
      two++;
      ked[it - 'A'][arr[0][0] - 'A'] = true;
      ked[arr[0][0] - 'A'][it - 'A'] = true;
     }
    }
  }
  if(arr[1][0] == arr[1][1] || arr[1][1] == arr[1][2] || arr[1][2] == arr[1][0]){
    if(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][2] == arr[1][0]){
      if(!per[arr[1][0]-'A']){
        one++;
        per[arr[1][0]-'A'] = true;
      }
    }
    else{
      char it;
     if(arr[1][0] == arr[1][1]) it = arr[1][2];
     else it = arr[1][1];

     if(!ked[it - 'A'][arr[1][0] - 'A'] && !ked[arr[1][0] - 'A'][it - 'A']){
      two++;
      ked[it - 'A'][arr[1][0] - 'A'] = true;
      ked[arr[1][0] - 'A'][it - 'A'] = true;
     }
    }
  }
  if(arr[2][0] == arr[2][1] || arr[2][1] == arr[2][2] || arr[2][2] == arr[2][0]){
    if(arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][2] == arr[2][0]){
      if(!per[arr[2][0]-'A']){
        one++;
        per[arr[2][0]-'A'] = true;
      }
    }
    else{
      char it;
     if(arr[2][0] == arr[2][1]) it = arr[2][2];
     else it = arr[2][1];

     if(!ked[it - 'A'][arr[2][0] - 'A'] && !ked[arr[2][0] - 'A'][it - 'A']){
      two++;
      ked[it - 'A'][arr[2][0] - 'A'] = true;
      ked[arr[2][0] - 'A'][it - 'A'] = true;
     }
    }
  }
  
  

}


signed main(){
  Usaco("tttt");
 char arr[5][5];

 for(int i=0; i < 3; i++){
  for(int j=0; j < 3; j++){
    cin >> arr[i][j];
  }
 }
 int one, two;
 one = two = 0;
 cek(arr, one, two);

 cout << one << endl << two << endl;






}

   
  



