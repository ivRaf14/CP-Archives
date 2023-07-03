#include <iostream>

using namespace std;

int main(){
	int a, b, n;
	cin >> n;
	
	while(n--){
		cin >> a >> b;
		
		int side = min(max(2 * b, a), max(2* a, b));
		cout << side * side << endl;
		
		
	}
	
	
	
	
	
	
	
}
