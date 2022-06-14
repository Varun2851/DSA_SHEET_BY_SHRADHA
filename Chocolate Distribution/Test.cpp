#include<iostream>
using namespace std

int solve(int *arr , int m  int n){

	sort(arr,arr+n);

	if(n<m){
		return 0;
	}
	if(n == 0 or m == 0){
		return 0;
	}

	//main logic , logic is based upon observation

	int mindifference = INT_MAX;

	for(int i = 0; i+m-1<n; i++){

		int diff = arr[i+m-1] - arr[i];

		if(diff < mindifference){
			mindifference = diff;
		}
	}
	return mindifference;
}

int main(){

	int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };

    int m = 7;

    int n = sizeof(arr)/sizeof(int);

    int ans = solve(arr , m , n);

    cout<<"Minimum difference is :"<<ans<<endl;

    return 0;

}