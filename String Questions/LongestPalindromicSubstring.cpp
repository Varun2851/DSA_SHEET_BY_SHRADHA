class Solution {
public:
    string longestPalindrome(string s) {
        int n =  s.size();
        //In this question there are two cases
        //1. the length of our string is even 
        //2. the length of our strinfg is odd
        //The basic idea which comes to mind that we will find the 
        //middle char in the string and strat comparing to left and right of that char 
        //Example  a a b a b , in this case  b is our middle char and we will compare to the left
        //and right by i-1 , i+1;
        // so our ans will be a b a
        // 2nd example b a a  b c  e f  g h , in this case our middle char is b and we 
        //compare left and right but they does not match but the output is b a a b 
        // so our this approach fails 
        string ans = ""; // take an empty string

        //start iterate over our main string 
        for(int i = 1; i<n; i++){
            int low = i-1;
            int high = i+1;
            //Case 1. for odd length
            while(low>=0 and high<n and s[low] == s[high]){
                if(ans.size() < high-low+1){
                    ans = s.substr(low , high-low+1);
                }
                low--;
                high++;
            }

            //Case 2. for even length
            low = i;
            high = i+1;

            while(low>=0 and high<n and s[low] == s[high]){
                if(ans.size() < high-low){
                    ans = s.substr(low , high-low+1);
                }
                low--;
                high++;
            }
        }
        return ans;
    }
};