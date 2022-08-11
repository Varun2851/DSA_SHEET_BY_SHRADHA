
class Solution {
public:
    string removeKdigits(string num, int k) {
        //make a stack
        stack<char>s;
        //traverse on string

        int n = nums.size();

        for(int i = 0; i<n; i++){
        	if(s.empty()){
        		st.push(s[i]);
        	}
        	else{
        		while(!s.empty() and s.top() > num[i] and k>0){
        			s.pop();
        			k--;
        		}
        		s.push(nums[i]);
        	}
        }
        while(k > 0){
        	s.pop();
        	k--;
        }
        if(s.empty()){
        	return "0";
        }
        string ans = "";
        while(!s.empty()){
        	ans = s.top()+ans; // lets suppose stack has 0 0 2 0 then we have to make 0200 , top ele we have to add in front
       		s.pop();
        }
        //leading zero
        int i = 0;
        while(i == '0'){
        	i++;
        }
        if(ans.substr(i) == ""){
        	return "0";
        }
        else{
        	return ans.substr[i];
        }
    }
};