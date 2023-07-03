#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	int n, k, l,c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	
	int mld = k * l; 
	int toast = mld / nl;
	int limes = c * d;
	int salt = p / np;
	
	int ans = min(min(toast,limes), salt)/ n;
	
	cout << ans;
	
	
	
	
	
	
	
	
}
