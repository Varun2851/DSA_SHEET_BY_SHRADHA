class Solution {
public:
    vector<int> partitionLabels(string s) {
        //first we will try to know the last index of char 
        //for this we can use hashmap
        unordered_map<char,int>mp;
        //iterate on the string and fill hashmap
        for(int i = 0; i<s.size(); i++){
            char ch = s[i];
            mp[ch] = i;
        }
        //Now make prev and maxi
        //prev for storing the last index
        //maxi will tell the last index of that char
        
        int prev = -1;
        int maxi = 0;
        
        vector<int>ans;
        
        for(int i= 0; i<s.size(); i++){
            maxi = max(maxi,mp[s[i]]);
            
            if(maxi == i){
                ans.push_back(i-prev);
                prev = maxi;
            }
        }
        return ans;
    }
};