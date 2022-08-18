class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        //we will use binary search here to find kth smallest element
        //here it is given that rows and column are sorted, so we can think about the 
        //Binary Search
        int n = matrix.size();
        int low = matrix[0][0];
        int high = matrix[n-1][n-1];
        while(low < high){
            
            int mid = low + (high - low)/2;
            int count = 0;
            for(int i = 0; i < n; i++){
                count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
                
            }
            
            if(count < k){
                low = mid + 1;
            }else{
                high = mid;
            }
            
        }
        
        return low;
    }
};