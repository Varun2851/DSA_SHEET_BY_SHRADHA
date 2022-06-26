class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int sn = s.size();
        int pn = p.size();
        //s = "cbaebabacd", p = "abc"

        int freqP[256] = {0};
        int freqS[256] = {0};

        vector<int>ans; //to store the starting index of anagram

        for(int i = 0; i<pn; i++){
            freqP[p[i]]++;
            freqS[s[i]]++;
        }
        if(freqS == freqP){
            ans.push_back(0);
        }

        for(int i = pn; i<sn; i++){
            freqS[s[i-pn]]--;
            freqS[s[i]]++;

            if(freqS == freqP){
                ans.push_back(i-pn+1);
            }
        }
        return ans;
    }
};