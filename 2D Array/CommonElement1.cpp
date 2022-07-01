#include<bits/stdc++.h>
using namespace std;

int CommomElement(int arr[4][5]){
	//1.Store the frequency of 0rth row element
	unordered_map<int,int>mp;
	int ans = 0;

	for(int i = 0; i<5; i++){
		mp[arr[0][i]]++;
	}

	//2.Now traverse in matrix from i = 1 to r-1 row 
	
	for(int i = 1; i<4; i++){
		for(int j = 0; j<5; j++){
			mp[arr[i][j]]++;

            if(mp[arr[i][j]] == 4){
                ans = mp[arr[i][j]];
            }
		}
	}
    
	return ans;
}

int main(){

	int arr[4][5] = {

		{1,2,3,4,5},
		{2,4,5,8,10},
		{3,5,7,9,11},
		{1,3,5,7,9},
	};

	cout<<CommomElement(arr)<<endl;
	return 0;

}