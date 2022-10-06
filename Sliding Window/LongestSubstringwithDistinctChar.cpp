#include<bits/stdc++.h>
using namespace std;

int maxLen(string s,int n){
	//we have to return the maxlen of substring which has distinct char 
	//so we have to include maximum unique char to find max len
	//to get the information about the unique char , we can use Map
	//Map ka size batayaiga ki kitnii max len h 

	unordered_map<char,int>mp;
	int maximumlen = INT_MIN;

	int i = 0;
	int j = 0;

	while(j<n){
		mp[s[j]]++;

		if(mp.size() == j-i+1){ //means all the char are unique , and we can cal the length

			maximumlen = max(maximumlen,j-i+1);
			j++;
		}
		else if(mp.size() < j-i+1){ //this means we have some duplicate char 
			while(mp.size() < j-i+1){
				mp[s[i]]--;
				
				if(mp[s[i]] == 0){
					mp.erase(s[i]);
				}
				i++;
			}
			j++;
		}

	}
	return maximumlen;
}

int main(){

	string s = "geeksforGeeks";
	int n = s.size();

	int ans = maxLen(s,n);
	cout<<ans;
	return 0;

}