//https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        
        int i = 0;
        int j = 0;
        int ans = 0;
        unordered_map<char, int> mp;
        // this is shrinkable window sliding
        while(j < n) {
            mp[s[j]]++;
            
            while(mp.size() == 3) {
                /*
                    Logic behind adding (n - j) to ans:
                    we for eg, s = aabbcabc
                    n = 8
                    0 1 2 3 4 5 6 7
                    a a b b c a b c
                            ^
                    we get the first substring which has all 3 present at j = 4, i.e (aabbc)
                    now we know that whole string consists of only [a, b, c]
                    so, continuing this substring forward will also be valid, right ? as we need atleast 1 of there occurences present
                    so valid substrings will be (aabbc)a , (aabbc)ab, (aabbc)abc
                    so how many substrings are possible with this ? that is (n - j) here it will be 8 - 4 = 4
                    
                    so whenever we encounter map size to 3 we calculate this substrings
                
                */
                ans += (n - j);
                
                mp[s[i]] > 1 ? mp[s[i]]-- : mp.erase(s[i]);
                
                i++;
            }
            j++;
        }
        
        return ans;
    }
};