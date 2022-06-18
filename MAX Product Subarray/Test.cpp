// C++ program to find Maximum Product Subarray
#include <bits/stdc++.h>
using namespace std;

/* Returns the product of max product subarray.*/
int maxSubarrayProduct(int arr[], int n)
{
	// Initializing result
	int result = arr[0];

	for (int i = 0; i < n; i++)
	{
		int mul = arr[i];
		// traversing in current subarray
		for (int j = i + 1; j < n; j++)
		{
			// updating result every time
			// to keep an eye over the maximum product
			
			mul *= arr[j];
            result = max(result, mul);
		}
		// updating the result for (n-1)th index.
		result = max(result, mul);
	}
	return result;
}

// Driver code
int main()
{
	int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum Sub array product is "
		<< maxSubarrayProduct(arr, n);
	return 0;
}

//////////////////////////////Better Approach////////////////////////

int maxSubarrayProduct1(int *arr , int n){

	int product = 1;
	int maxproduct = INT_MIN;

	for(int i = 0; i<n; i++){
		product = product*arr[i];
		if(product == 0){
			product = 1;
		}
		maxproduct = max(product , maxproduct);
	}

	product = 1;

	for(int i = n-1; i>=0 i--){
		product = product*arr[i];
		if(product == 0){
			product = 1;
		}
		maxproduct = max(product , maxproduct);
	}
	return maxproduct;
}