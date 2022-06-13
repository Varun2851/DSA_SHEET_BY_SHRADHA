class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int largestsum = INT_MIN;
        int currentsum = 0;
        
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            currentsum += nums[i];
            
            if(currentsum > largestsum){
                largestsum = currentsum;
            }
            
            if(currentsum < 0){
                currentsum = 0;
            }
            
        }
        return largestsum;
    }
};