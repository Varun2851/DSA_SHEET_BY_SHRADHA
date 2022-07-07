//contiguous array

#include<bits/stdc++.h>
using namespace std;

int maxlength(int *arr , int n){
	int sum = 0;
	int maximumlength = 0;
	unordered_map<int,int>mp;

	//1 Reaplace all the 0 with -1
	for(int i = 0; i<n; i++){
		if(arr[i] == 0){
			arr[i] = -1;
		}
	}

	//2.Traverse on the array
	for(int i = 0; i<n; i++){
		sum += arr[i];

		if(sum == 0){
			maximumlength = max(i,i+1);
		}
		//3.Check in hashmap

		if(mp.find(sum) != mp.end()){
			maximumlength = max(maximumlength, i - mp[sum]);
		}
		else{
			mp[sum] = i;
		}
	}
	return maximumlength;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[] = {0,1,0,1,0,0,1,0,1};
	int n = 9;

	cout<<maxlength(arr,n)<<endl;

	return 0;
}