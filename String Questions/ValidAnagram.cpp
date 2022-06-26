class Solution {
public:
    bool isAnagram(string s, string t) {
        int sn = s.size();
        int tn = t.size();

        if((sn<tn) or (sn>tn)){
            return false;
        }

        unordered_map<char , int>ms;
        unordered_map<char , int>mt;

        for(auto X:s){
            ms[X]++;
        }
        for(auto Y:t){
            mt[Y]++;
        }

        for(int i = 0; i<sn; i++){
            if(ms.find(s[i].second) == mt.find(s[i].second)){
                return true;
            }
        }
        return false;

    }
};