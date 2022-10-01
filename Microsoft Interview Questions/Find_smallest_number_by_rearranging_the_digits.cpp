
class Solution{
	public:
   	string minimum_Number(string s){
   	    // Code 
   	    sort(s.begin(),s.end());
   	    if(s[0] != '0'){
   	        return s;
   	    }
   	    int i = 1;
   	    while(i < s.size()){
   	        if(s[i] != '0'){
   	            swap(s[i],s[0]);
   	            return s;
   	        }
   	        i++;
   	    }
   	    return s;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		string ans = ob.minimum_Number(s);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends