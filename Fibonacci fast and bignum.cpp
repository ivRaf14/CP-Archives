include <bits/stdc++.h>

#define ll long long 

using namespace std;

unsigned long long fib(int n) 
{ 
    unsigned long long a = 0, b = 1, c, i; 
    if( n == 0) 
        return a; 
    for(i = 2; i <= n; i++) 
    { 
       c = a + b; 
       a = b; 
       b = c; 
    } 
    return b; 
} 

	

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	int cnt = 1;
	
	while(n--){
	unsigned long long res = 0, a;
	int n_n; cin >> n_n;
	for(int i=0; i < n_n; i++){
		cin >> a;
		res+=fib(a+1);
	}
	cout << "Case #"<<cnt++<<": "<<res << endl;
		
	}
	
}
