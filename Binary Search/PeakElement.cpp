class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        //testcase 1 2 3 1
        //here 3 is the peak element bcoz 3 is larger than his previous and next ele
        //we will use here the concept of binary search 
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low <= high){
            int mid = (low+high)/2;
            //special case
            if(mid == 0){
                //no chance for moving back
                if(nums[mid] > nums[mid+1]){
                    return mid;
                }
                else{
                    low = mid+1; 
                }
            }
            else if(mid == n-1){
                //no chance to move forward
                if(nums[mid-1]<nums[mid]){
                    return mid;
                }
                else{
                    high = mid-1;
                }
            }
            else{
                if(nums[mid] > nums[mid-1] and nums[mid] > nums[mid+1]){
                    return mid;
                }
                else if(nums[mid] < nums[mid+1]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return -1;   
    }
};