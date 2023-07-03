#include <iostream>
#include <string>
using namespace std;

int main(){
	int size, cnta = 0, cntd = 0;
	string kal;
	
	
	cin >> size;
	cin >> kal;
	
	for(int i = 0 ; i < size; i ++){
		if(kal[i] == 'A' ){
			cnta++;
		}
		else{
			cntd++;
		}
	}
	
	if( cnta > cntd){
		cout << "Anton";
	}
	if(cnta < cntd){
		cout << "Danik";
	}
	 if(cnta == cntd){
		cout << "Friendship";
	}
	
	
	
	
	
	
}
