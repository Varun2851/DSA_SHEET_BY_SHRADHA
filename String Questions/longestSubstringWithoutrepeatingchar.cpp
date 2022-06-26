//Mistakes that i have done while writing the code
// I first incremented the high pointer before calculating the ans .

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        //we will use sliding window technique to solve this problem
        //for window sliding we will need two ointers 
        int low =  0;
        int high = 0;
        //we need a substring which should be large as possible and it should contain unique char
        //we will maintain a window of unique char , so maintain the uniqueness , we need to store the 
        //frequency of char

        int freq[256] = {0};
        int ans = INT_MIN; // to store the length of substring
        //now strat traversing in the string
        while(high < n){
            freq[s[high]]++;

            while(freq[s[high]] > 1){
                freq[s[low]--;
                low++;
            }
            ans = max(ans, high-low+1);
            high++;

        }
        return ans;

    }
};