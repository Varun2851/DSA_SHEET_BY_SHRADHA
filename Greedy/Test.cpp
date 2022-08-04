#include<bits/stdc++.h>
using namespace std;

int main(){

	int arr[] = {7,1,11,8,4,10};
	int n = sizeof(arr)/sizeof(int);
	int M = 8;
	vector<int>ans;

	for(int i = 1; i<n; i++){
		if(abs(arr[i]-arr[i-1])%M == 0){
			ans.push_back(arr[i-1]);
			ans.push_back(arr[i]);
		}
	}
	int m = ans.size();
	cout<<m<<" ";
	return 0;
}