#include <iostream>

using namespace std;

int main(){
	int start , end, cnt, total = 0;
	cin >> start >> end >> cnt;
	
	
	cout << start << endl;
	for(int i = 1; i < end; i ++){
		total = start + (cnt * i);
		cout << total << endl;
		total = 0;
	}
	
	
	
	
}
