# include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int cnt, sisa;
	int money ; cin >> money;
	
	if(money >= 100){
		sisa = money /100;
		cnt += sisa;
		money = money - sisa * 100;
	}
	
		if(money >= 20){
		sisa = money /20;
		cnt += sisa;
		money = money - sisa * 20;
	}
	
		if(money >= 10){
		sisa = money /10;
		cnt += sisa;
		money = money - sisa * 10;
	}
	
		if(money >= 5){
		sisa = money /5;
		cnt += sisa;
		money = money - sisa * 5;
	}
	
	cnt += money;
	cout << cnt;






}
