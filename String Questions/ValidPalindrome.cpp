class Solution {
public:
    bool isPalindrome(string s) {
        string str ="";
        int i=0; 
        while( i < s.size()){
            //condition to add only 'A' to 'Z' and 'a' to 'z' and '0' to '9' character
            if((s[i]>='A' and s[i] <='Z') or (s[i]>='a' and s[i]<='z') or (s[i]>='0' and s[i]<='9' ))
                //this tolower case function convert all the uppercase character to lowercase . . .
                str += tolower(s[i]);        
            i++;
        }
        //optional
        if(str.size()==0) return true;
        
        int low = 0;
        int high = str.size()-1;
        
        while(low<high){
            if(str[low] != str[high]) return false;
            low++;
            high--;
        }
        
        return true;
    }
};