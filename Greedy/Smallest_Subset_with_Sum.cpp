#include<bits/stdc++.h>
using namespace std;

bool compare(int a , int b){
	return a > b;
}

int main(){

	int arr[] = {2,1,2};
	int n = sizeof(arr)/sizeof(int);

	int half_sum = 0;
	int Entiresum = 0;
	int count = 0;
	int sum = 0;

	sort(arr,arr+n,compare);

	for(int i = 0; i<n; i++){
		Entiresum += arr[i];
	}

	half_sum = Entiresum/2;

	for(int i = 0; i<n; i++){
		sum += arr[i];
		count++;
		if(sum  > half_sum){
			cout<<count<<" ";
			return 0;
		}
	}


	return 0;
}