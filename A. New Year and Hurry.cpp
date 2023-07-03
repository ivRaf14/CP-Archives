#include <iostream>

using namespace std;

int main(){
	int n , k , probs, cnt;
	cin >> n >> k;
	
	int havetime = 240 - k;
	for(int i = 1; i <= n; i++){
		probs += 5* i;
		
		if(havetime >= probs){
			cnt++;
			havetime -= probs;
		}
		else{
			break;
		}
	}
	cout << cnt;
	
	
	
	
	
	
	
	
	
	
}
