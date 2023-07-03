#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int p, l;
int arr[100][100];
int pem[100][100];
int cont[100][100];

void print(int arr[100][100]){
 for(int i=0; i<p; i++){
    for(int j=0; j<l; j++){
    cout << arr[i][j];
    }
    cout << endl;
  } 
}

bool identik(int arr[100][100]){
  for(int i=0; i<p; i++){
    for(int j=0; j<l; j++){
      
      if(arr[i][j] != pem[i][j])return 0;
      
      
    }
  }
  return 1;
}

bool smbhorizon(int arr[100][100]){
  for(int i=0; i < p; i++){
    for(int j=0; j<l; j++){
      if(arr[i][j] != pem[p-i-1][j]) return 0;
    }
  }
  return 1;
}

bool smbvertical(int arr[100][100]){
  for(int i=0; i < p; i++){
    for(int j=0; j<l; j++){
      if (arr[i][j] != pem[i][l-j-1]) return 0;
    }
  }
  return 1;

}

bool dgnlkanan(int arr[100][100]){
  
  for(int i=0; i < p; i++){
    for(int j=0; j<l; j++){
     
       if (arr[i][j] != pem[j][i]) return 0;
    }
  }
  return 1;
}

bool dgnlkiri(int arr[100][100]){
  for(int i=0; i<p; i++){
    for(int j=0; j<l; j++){
      
      if(arr[i][j] != pem[p-1-j][l-1-i])return 0;
      
      
    }
  }
  return 1;
}




int main(){
  cin  >> p >> l;

  for(int i=0; i<p; i++){
    for(int j=0; j<l; j++){
      cin >> arr[i][j];
    }
  }

  int n, m; cin >> n >> m;

  for(int i=0; i<n; i++){
    for(int j =0; j<m; j++){
      cin >> pem[i][j];
    }
  }


  
   

   if(identik(arr)) cout << "identik" << endl;
   else if(smbhorizon(arr)) cout << "horisontal" << endl;
   else if(smbvertical(arr)) cout << "vertikal" << endl;
   else if(dgnlkiri(arr)) cout << "diagonal kiri bawah" << endl;
   else if(dgnlkanan(arr)) cout << "diagonal kanan bawah" << endl;

    else cout << "tidak identik" << endl;

}
