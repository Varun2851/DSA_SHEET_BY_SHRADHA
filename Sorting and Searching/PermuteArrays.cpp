//https://practice.geeksforgeeks.org/problems/permutations-in-array1747/1/
bool isPossible(long long a[], long long b[], int n, long long k) {
        // Your code goes here
        //1. sort  the 1st array in incresing order
        sort(a,a+n);
        //2.Sort the 2nd array in decreasing order
        sort(b,b+n,comp);
        
        for(int i = 0; i<n; i++){
            if(a[i] + b[i] >= k){
                return true;
            }
        }
  

        return false;
}        