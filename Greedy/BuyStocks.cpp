#include<bits/stdc++.h>
using namespace std;

int solve(int *arr , int amount,int n){
	vector<pair<int,int> >v;
	int x = 1;
	int y;
	for(int i = 0; i<n; i++){
		v.push_back({arr[i],x});
		x++;
	}

	sort(v.begin(),v.end());

	int ans = 0;

	for(int i = 0; i<v.size(); i++){
		y = amount/v[i].first;
		ans += min(y,v[i].second);
		amount -= min(y,v[i].second)*v[i].first;
	}

	return ans;

}

int main(){

	int arr[] = {10,7,19};
	int n = sizeof(arr)/sizeof(int);
	int amount = 45;

	cout<<solve(arr,amount,n);
	return 0; 
}