
//Comparision should be made among start end  key and mid 

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int search(int arr[], int s, int e, int key){
    //complete the function here
    while(s <= e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        //first try to know which part is sorted
        if(arr[s] <= arr[mid]){
            //left part is sorted
            
            if(arr[s] <= key and arr[mid] >= key){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        else{
            if(arr[mid] <= key and arr[e] >= key){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            
        }
    }
    return -1;
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends