#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > findSubarray(int arr[] , int n){
	//in map we will store the starting index of all the subarray
	unordered_map<int,vector<int> >mp;
	//create an empty vector of pair to store subarray starting and ending index
	vector<pair<int, int>>output;

	int sum = 0;
	for(int i = 0; i<n; i++){
		sum += arr[i];

		if(sum == 0){
			output.push_back({0,i});
		}
		if(mp.find(sum) != mp.end()){
			vector<int>vc = mp[sum];
			for(auto it = vc.begin(); it != vc.end(); it++){
				output.push_back({*it+1,i});
			}
		}
		mp[sum].push_back(i);
	}
	return output;
}

void print(vector<pair<int,int> > output){
	for(auto it = output.begin(); it != output.end(); it++){
		cout<<"subarray found from index"<<it->first<<"to"<<it->second<<endl;
	}
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[] = {6,3,-1,-3,4,-2,2,4,6,-12,-7};
	int n = 11;

	vector<pair<int,int>>output = findSubarray(arr,n);

	if(output.size() == 0){
		cout<<"No subarray found"<<endl;
	}
	else{
		print(output);
	}

	return 0;
}
