/////////////SLIDING WINDOW APPROACH WILL NOT WORK FOR NEGATIVE NUMBERS///////////////////////
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int sum = 0;
        int ans = INT_MAX;
        
        while(j < n){
            sum = sum+nums[j];
            
            if(sum < target){
                j++;
            }
            
            else{
                while(sum >= target){
                    ans = min(ans,j-i+1);
                    sum = sum-nums[i];
                    i++;
                }
                j++;
            }
        }
        if(ans == INT_MAX){
            return 0;
        }
        return ans;
    }
};


/////////////////////////////2nd Approach/////////////////////////////////////////////

class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
        //we will use the concept of subarray sum equal k
        //Create a hashmap , key == sum , value == index
        unordered_map<int, int>mp;
        int sum = 0;
        int maxlen = 0;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            
            if(sum == k){
                maxlen = i+1;
            }
            
            //if sum is not present in hashmap
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
            
            //check if (sum-k) is present or not
            if(mp.find(sum-k) != mp.end()){
                //update maxlen
                
                if(maxlen < (i-mp[sum-k])){
                    maxlen = i-mp[sum-k];
                }
            }
        }
        return maxlen;
    } 

};