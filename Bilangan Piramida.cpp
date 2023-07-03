#include <iostream>
#include <string>

using namespace std;

int main(){
	int a, cnt=0, total=0;
	cin >> a;
	
	while(a >= total){
		cnt++;
		total += (cnt*(cnt+1)/2);
	}
	cout << cnt -1;
}
