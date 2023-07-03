#include <bits/stdc++.h>

#define ll long long 

using namespace std;


	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m; cin >> n >> m;
	vector<int> bbk;
	vector<int> spt;
	int a, b;
	
	int cnt = 0;
	int curr=0;
	// 11 10 12 10 13 -> 13 12 11 10 10
	// 11 9  10 11 13 -> 13 11 11 10 9
	
	for(int i=0; i <n; i++){
		cin >> a;
		bbk.push_back(a);
	}
	for(int i=0; i <m; i++){
		cin >> b;
		spt.push_back(b);
	}
	sort(bbk.begin(), bbk.end(),greater<int>());
	sort(spt.begin(), spt.end(),greater<int>());
	
	for(int i=0; i <n; i++){
		for(int j=curr; j <m; j++){
			if(bbk[i] == spt[j] || bbk[i] + 1 == spt[j]){
				cnt++;
				spt[j] = -100;
				break;
			}
		}
	}
	cout << cnt << endl;
	
}
	
	
	
	
	
	
	
		





