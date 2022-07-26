#include<bits/stdc++.h>
using namespace std;

void solve(int n , char ch){

	string result = "";

	if(n > 0){
		string N = to_string(n); 

		int i = 0;
		while((i < N.size()) and (ch <= N[i]-'0')){
		result.push_back(N[i]);
		i++;
		}
		result.push_back(ch);

		while(i < N.size()){
		result.push_back(N[i]);
		}
	}
	else{

		string N = to_string(n);
		int i = 0;
		while((i < N.size()) and ch >= N[i]-'0'){
			result.push_back(N[i]);
			i++;
		}
		result.push_back(ch);

		while(i < N.size()){
			result.push_back(N[i]);
		}

	}
	cout<<result;
}

int main(){

	int n = 1234;
	int x = 5;

	char ch = x+'0';

	solve(n,ch);

	return 0;
}