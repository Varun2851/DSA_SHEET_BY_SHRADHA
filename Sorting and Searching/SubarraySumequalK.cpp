//Subarray sum eqaul k
#include<bits/stdc++.h>
using namespace std;

int solve(int *arr , int k , int n){
	int sum = 0;
	int count = 0;
	unordered_map<int,int>mp;

	for(int i = 0; i<n; i++){
		sum += arr[i];

		if(sum == k){
			count++;
		}

		//Check in hashmap
		if(mp.find(sum-k) != mp.end()){
			count += mp[sum-k];
		}
		//If alreday exist , increase frequency
		if(mp.find(sum) != mp.end()){
			mp[sum]++;
		}
		else{
			mp[sum] = 1;
		}
	}
	return count;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[] = {9, 4, 20, 3, 10, 5};
	int k;
	cin>>k;
	int n = 6;

	cout<<solve(arr,k,n)<<endl;
	return 0;
}