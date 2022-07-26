#include<bits/stdc++.h>
using namespace std;

string solve(int n , char ch){

	//first check n is + or -
	string ans = "";
	if(n > 0){
		string N = to_string(n);
		int index =  -1;
		for(int i = 0; i<N.size()-1; i++){
			if(N[i] == ch and N[i]-'0' < N[i+1]-'0'){
				index = i;
				break;
			}
		}
		if(index == -1){
			for(int i = N.size()-1; i>=0; i--){
				if(N[i] == ch){
					index = i;
					break;
				}
			}
		}

		//string ans = "";
		for(int i = 0; i<N.length(); i++){
			if(i != index){
				ans += N[i];
			}
		}
	}
	else{
		string N = to_string(n);
		int index = -1;

		for(int i = 0; i<N.size()-1; i++){
			if(N[i] == ch and N[i]-'0' > N[i+1]-'0'){
				index = i;
				break;
			}
		}
		if(index == -1){
			for(int i = N.size()-1; i>=0; i--){
				if(N[i] == ch){
					index = i;
					break;
				}
			}
		}

		//string ans = "";

		for(int i = 0; i<N.length(); i++){
			if(i != index){
				ans += N[i];
			}
		}

	}
	return ans;
}

int main(){

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int n = -5459;
	int x  = 5;

	char ch = x+'0';

	string ans1 = solve(n,ch);

	for(int i = 0; i<ans1.size(); i++){
		cout<<ans1[i];
	}

	return 0;

}