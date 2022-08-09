#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){

	int arr[] = {1, 2, 4, 8};
	int n = sizeof(arr)/sizeof(int);
	sort(arr,arr+n);

	int low = 0;
	int high = n-1;

	int counter = 0;
	int index = 0;

	vector<int>ans;

	while(index < n){
		if(counter%2 == 0){ 
			ans.push_back(arr[low]);
			low++;
		}
		else{
			ans.push_back(arr[high]);
			high--;
		}
		counter++;
		index++;
	}
	
	int sum = 0;
	for(int i = 1; i<n; i++){
		sum += abs(ans[i]-ans[i-1]);
	}
	sum += abs(ans[n-1] - ans[0]);
	cout<<sum<<" ";
	return 0;
}