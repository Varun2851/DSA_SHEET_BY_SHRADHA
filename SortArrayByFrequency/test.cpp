#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>&a,pair<int,int>&b){
	return a.second  > b.second;
}

int main(){

	int arr[] = {1,2,3,2,4,3,1,2};
	int n = sizeof(arr)/sizeof(int);

	unordered_map<int , int>mp;
	vector<pair<int,int>>v;
	vector<int>ans;

	for(int i = 0; i<n; i++){
		mp[arr[i]]++;
	}

	for(auto X : mp){
		v.push_back({X.first,X.second});
	}
	sort(v.begin(),v.end(),compare);

	for(auto X : v){
		while(X.second--){
			ans.push_back(X.first);
		}
	}

	for(int i = 0; i<n; i++){
		cout<<ans[i]<<" ";
	}

	return 0;
}