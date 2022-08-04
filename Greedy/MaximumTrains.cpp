#include<bits/stdc++.h>
using namespace std;

struct train{
	int arrival;
	int depart;
	int plateform;
};
bool comp(train t1, train t2){
	return (t1.depart < t2.depart);
}
int maxtrains(train arr[] , int n){
	int maxi = INT_MIN;

	for(int i = 0; i<n; i++){
		maxi = max(maxi,arr[i].plateform);
	}
	int slots[maxi+1];
	int maxCount = 0;

	memset(slots,-1,sizeof(slots));
	sort(arr,arr+n,comp);

	for(int i = 0; i<n; i++){
		if(slots[arr[i].plateform] == -1){
			slots[arr[i].plateform] = arr[i].depart;
			maxCount++;
		}
		else{
			if(slots[arr[i].plateform] < arr[i].arrival){
				slots[arr[i].plateform] = arr[i].depart;
				maxCount++;
			}
			else{
				continue;
			}
		}
	}
	return maxCount;
}

int main(){

	train arr[] = {{100,1030,1},{1010,1020,1},{1025,1040,1},{1130,1145,2},{1130,1140,2}};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<maxtrains(arr, n);
	return 0;
}