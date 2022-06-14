class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int>mp;
        for(auto X:nums){
            mp[X]++;
        }
        
        bool flag = true;
        
        for(auto digit : mp){
            if(digit.second > 1)
                flag = false;
        }
        if(flag == true){
            return false;
        }
        return true;
    }
};