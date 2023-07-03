#include <bits/stdc++.h>
using namespace std;



int main()
{
	int rows, column;
	cin >> rows >> column;
	int arr[100][100];
	
	for(int i =0; i < rows; i++){
		for(int j =0; j < column; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int x = 0; x < rows; x++){
		for(int y = 0; y <column; y++){
			swap(arr[x][y], arr[x][column]);
			column--;
		}
	}
	for (int i = 0; i < rows; i++)
 	for (int j = i; j < column; j++)
 	swap(arr[i][j], arr[j][i]);
	
	
	for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < column; j++){
        	cout << arr[i][j] << " ";		
		}             
		cout << endl;
	}
}
