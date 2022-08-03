#include<bits/stdc++.h>
using namespace std;

struct job
{
	char id;
	int deadline;
	int profit;
};

bool compare(job a, job b){
	return (a.profit > b.profit);
}

void solve(job arr[],int n){
	//1.Sort all jobs acc to decreasing order of profit
	sort(arr,arr+n,compare);
	//2.Make two array of result and time slot
	int result[n];
	bool slots[n];
	//3.iterate all slots to be free
	for(int i = 0; i<n; i++){
		slots[i] = false;
	}
	//4.iterate throgh all given jobs
	for(int i = 0; i<n; i++){
		for(int j = min(n,arr[i].deadline-1); j>=0; j--){
			if(slots[j] == false){
				result[j] = i;
				slots[j] = true;
				break;
			}
		}
	}
	//5.Print the result 
	for(int i = 0; i<n; i++){
		if(slots[i]){
			cout<<arr[result[i]].id<<" ";
		}
	}

}

int main(){
	job arr[] = { { 'a', 2, 100 },
				{ 'b', 1, 19 },
				{ 'c', 2, 27 },
				{ 'd', 1, 25 },
				{ 'e', 3, 15 } };

	int n = sizeof(arr) / sizeof(arr[0]);

	solve(arr,n);

	return 0;
}