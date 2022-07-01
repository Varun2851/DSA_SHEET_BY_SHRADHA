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

	//3.Take input of key
	int key;
	cin>>key;
	int i,j;
	for(i = 0; i<row;  i++){
		for(j = 0; j<col; j++){
			if(arr[i][j] == key){
				cout<<"key found at"<<row<<col<<endl;
				break;
			}
		}
		//We also need to break outer loop
		if(j != col){
			break;
		}
	}

	if(i == row){
		cout<<"key is not present in the matrix"<<endl;
	}
	return 0;
}