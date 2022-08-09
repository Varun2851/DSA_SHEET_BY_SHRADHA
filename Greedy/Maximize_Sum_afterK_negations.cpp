#include<bits/stdc++.h>
using namespace std;

int main(){

	int arr[] = {-2,-1,0,2,5};
	int n = sizeof(arr)/sizeof(int);

	int k = 3;

	sort(arr,arr+n); //sorting is necessary

	int sum = 0;

	int index;

	for(index = 0; index<n; index++){
		if(k != 0 and arr[index] < 0){
			arr[index] = -1*arr[index];
			k--;
		}
		else{
			break;
		}
	}
	//if all numbers are positive
	if(index == 0){
		index = 1;
	}
	//if all numbers are negative
	if(index == n){
		index = -1;
	}
	if(k %2 == 0 or k == 0){
		for(int i = 0; i<n; i++){
			sum += arr[i];
		}
		cout<<sum;
		return 0;
	}

	if(abs(arr[index]) > abs(arr[index-1])){
		index--;
	}
	arr[index] = -1*arr[index];

	for(int i = 0; i<n; i++){
		sum += arr[i];
		
	}

	cout<<sum<<" ";

	return 0;
}