#include <iostream>
using namespace std;
int main()
{
 int n,a,t=0,p,q,r;
 for(cin>>n;n--;){
  cin>>p>>q>>r;
  if(p+q+r>1)t++;
 }cout<<t;
 return 0;
}
