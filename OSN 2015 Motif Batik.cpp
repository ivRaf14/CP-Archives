#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int a ,b;
	
	map<int,int> map;
	
	for(int i=0; i <n; i++){
		cin >> a >> b;
		map[a] = b;
	}
	int res = 0;
	int index = 0;
	
	
	
	for (auto itr = map.begin(); itr != map.end(); ++itr){
    	if(map.find(index) != ){
    		res+= map[index -> second];
		} 
		index++;         
    }
    
    cout << res << endl;
	
	
	
	
	
}
