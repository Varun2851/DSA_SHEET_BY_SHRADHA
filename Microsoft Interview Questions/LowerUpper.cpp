#include<bits/stdc++.h>
using namespace std;

char presentinBoth(string s){

	int freqL[26] = {0};
	int freqU[26] = {0};

	for(int i = 0; i<s.size(); i++){
		if(islower(s[i])){
			freqL[s[i]-'a']++;
		}

		if(isupper(s[i])){
			freqU[s[i]-'a']++;
		}
	}

	for(int i = 25; i>=0; i--){
		if(freqU[i] and freqL[i]){
			return char(i+'A') + "";
		}
	}
	return 'N';
}

int main(){

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	string s = "aaacbAbCd";

	char x = presentinBoth(s);

	cout<<x<<endl;

	return 0;
}