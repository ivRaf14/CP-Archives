#include <bits/stdc++.h>
using namespace std;
 
// initializing the max value

 
// Driver Code
int main()
{
  int n; cin >> n;
  while(n--){
  	int a; cin >> a;
  	int lamp = 0;
  	while(a--){
  		char np; cin >> np;
  		if(np == 'N') lamp++;
  		else if(np == 'P') lamp--;
	  }
	  if(lamp >= 0){
	  	cout << "tidak mati lampu" << endl;
	  }
	  else if(lamp < 0)cout << "mungkin mati lampu" << endl;
  }
 
    return 0;
}
