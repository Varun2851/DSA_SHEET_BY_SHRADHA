#include<iostream>
using nmaespace std;

int main(){

	//1.Declare a 2D matrix
	int arr[100][100];

	int row,col;
	cin>>row>>col;

	int number = 1;

	//2.take input of matrix
	for(int i = 0; i<row; i++){
		for(int  j = 0; j<col; j++){
			arr[row][col] = number;
			number++;
		}
	}

	for(int i = 0; i<col; i++){
		if(i%2 == 0){
			for(int k = 0; k<row; k++){
				cout<<arr[k][col];
			}
		}
		else{
			for(int l = row-1; l>=0; l--){
				cout<<arr[l][col];
			}
		}
	}
	return 0;
}