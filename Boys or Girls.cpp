#include<iostream>
using namespace std;
char c[10002];
long i,r,a[1000];

int main()
{
 cin>>c;
 for(i=0;c[i];i++)
  a[c[i]]=1;
 for(i=0;i<300;i++)
  r+=a[i];
 cout<<(r%2==1?"IGNORE HIM!": "CHAT WITH HER!");
}
