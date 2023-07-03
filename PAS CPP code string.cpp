#include <bits/stdc++.h>

#define ll long long 

using namespace std;

	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; cin >> s;
	if(s == "PAS"){
		cout << 
"var data:array[1..10000] of longint;" << endl <<
"    n,i,j,temp:longint;" << endl <<
"begin" << endl <<
"  readln(n);" << endl <<
"  for i:=1 to n do readln(data[i]);" << endl <<
"  for i:=1 to n-1 do" << endl <<
"    for j:=i+1 to n do" << endl <<
"      if (data[i]>data[j]) then" << endl <<
"      begin" << endl <<
"        temp:=data[i];" << endl <<
"        data[i]:=data[j];" << endl <<
"        data[j]:=temp;" << endl <<
"      end;" << endl <<
"  for i:=1 to n do writeln(data[i]);" << endl <<
"end." << endl;
	}
	
	else{
		cout << 
"int data[10001];" << endl <<
"int n,i,j,temp;" << endl <<
"int main(){" << endl <<
"  scanf(\"%d\",&n);" << endl <<
"  for (i=1;i<=n;i++) scanf(\"%d\",data[i]);" << endl <<
"  for (i=1;i<=n-1;i++)" << endl <<
"    for (j=i+1;j<=n;j++)" << endl <<
"      if (data[i]>data[j]){" << endl <<
"        temp=data[i];" << endl <<
"        data[i]=data[j];" << endl <<
"        data[j]=temp;" << endl <<
"      }" << endl <<
"  for (i=1;i<=n;i++) printf(\"%d\\n\",data[i]);" << endl <<
"  return 0;" << endl <<
"}" << endl;
	}
	
	
	
}
	
	
	
	
	
	
	
		





