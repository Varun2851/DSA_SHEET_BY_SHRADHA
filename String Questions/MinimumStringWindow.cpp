
class Solution {
public:
    string minWindow(string s, string t) {
        int start = 0;
       	int cnt = 0;
       	int startindex = -1;
       	int fs[256] = {0};
       	int fp[256] = {0};

       	for(int i = 0; i<p.length(); i++){
       		fp[p[i]]++;
       	}

       	//sliding window algorithm

       	int min_so_far = INT_MIN;
       	int windowsize = 0;

       	for(int i = 0; i<s.length(); i++){
       		fs[s[i]]++;

       		if(fp[s[i]] != 0 and fs[s[i]] <= fp[s[i]]){
       			cnt++;
       		}

       		if(cnt == p.length()){

       			while(fp[s[start]] == 0 or fs[s[start]] > fp[s[strat]]){
       				fs[s[strat]]--;
       				start++;
       			}

       			//Calculate window length

       			windowsize = i-start+1;
       			if(windowsize < min_so_far){
       				min_so_far = windowsize;
       				startindex = start;
       			}
       		}
       	}
       	if(startindex == -1){
       		return "No window Found";
       	}
       	return s.substr(startindex,min_so_far);
    }
};