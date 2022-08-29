//https://leetcode.com/submissions/detail/786513982/
class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        int n= s.size();
        string ans = "";
        for(int i = 0; i<n; i++){
            
            if(s[i] != '*'){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    char topchar = st.top();
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};