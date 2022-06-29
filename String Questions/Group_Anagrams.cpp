class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>>ans;

        unordered_map<string,vector<string>>mp;

        for(auto x: strs){
            string temp = x;
            sort(x.begin(),x.end());
            mp[x].insert(temp);
        }
        
        for(auto y: mp){
            vector<string>temp = y.second;
            ans.push_back(temp);
        }
        return ans;
    }
};

// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]