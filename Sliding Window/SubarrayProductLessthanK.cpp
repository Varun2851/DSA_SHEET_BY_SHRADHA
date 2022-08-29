#include<bits/stdc++.h>
using namespace std;

int solve(int*arr,int n,int k){
	int count = 0; int multiply = 1;
	for(int i = 0; i<n; i++){
		//count single element
		if(arr[i] < k){
			count++;
		}
		multiply = arr[i];
		for(int j = i+1; j<n; j++){
			multiply = multiply*arr[j];

			if(multiply < k){
				count++;
			}
			else{
				break;
			}
		}
	}
	return count;
}

int main(){

	int arr[] = {10,5,2,6};
	int k = 100;
	int n = 4;

	int ans = solve(arr,n,k);
	cout<<ans;

	return 0;
}