#include <iostream>

using namespace std;

int main(){
	int a, b, hasil;
	char s;
	
	cin >> a >> s >> b;
	
	if(s == '+' || s == '-' || s == '*'){
		if(s =='+'){
			cout << a + b << endl;
		}
		else if(s == '-'){
			cout << a - b << endl;
		}
		else{
			cout << a * b << endl;
		}
	}
	if(s == '>' || s == '<' || s == '='){
		if(s == '>'){
			if(a > b){
				cout <<"benar"<< endl;
				
			}
			else{
				cout << "salah" << endl;
			}
		}
		else if(s == '<'){
			if(a < b){
				cout << "benar" << endl;
				
			}
			else{
				cout << "salah" << endl;
			}
		}
		else{
			if(a == b){
				cout << "benar" << endl;
			}
			else{
				cout << "salah" << endl;
			}
		}
	}
	
	
	
	
}
