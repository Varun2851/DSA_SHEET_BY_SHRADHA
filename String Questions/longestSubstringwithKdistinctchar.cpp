
int longestKSubstr(string s, int k) {
        
        int i=0;
        int j=0;
        int maxi=INT_MIN;
        
        unordered_map<int,int>m;
        
        while(j<s.length()){
            
            m[s[j]]++;
            
            if(m.size() < k){
                j++;
            }
            else if(m.size() == k){
                maxi=max(maxi,j-i+1);
                j++;
            }
            else if(m.size() > k){
                
                while(m.size() > k){
                    m[s[i]]--;
                    
                    if(m[s[i]] == 0){
                        m.erase(s[i]);
                    }
                    
                    i++;
                }
                j++;
            }
            
        }
        
        // cout<<"maxi "<<maxi<<endl;
        
        if(maxi >= 0){
            return maxi;
        }
        else{
            return -1;
        }
      
    }