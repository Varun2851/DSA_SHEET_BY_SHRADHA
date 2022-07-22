#include<bits/stdc++.h>
using namespace std;

int solve(int *arrival,int*departure,int n){


	sort(arrival,arrival+n);
	sort(departure,departure+n);

	int count = 1; //At least one plateform is required
	int i = 1;
	int j = 0;
	int ans = 1;
	while(i < n and j <n){
		if(arrival[i] > departure[j]){
			count--;
			j++;
		}
		else{
			count++;
			i++;
		}
		ans = min(ans,count);
	}
	return ans;
}

int main(){

	int n = 6;
	int arrival[] = {0900, 0940, 0950, 1100, 1500, 1800};
	int departure[] = {0910, 1200, 1120, 1130, 1900, 2000};

	cout<<solve(arrival,departure,n);
	return 0;
}