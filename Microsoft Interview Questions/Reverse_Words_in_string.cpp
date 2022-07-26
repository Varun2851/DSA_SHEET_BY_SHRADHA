#include<bits/stdc++.h>
using namespace std;

void PrintReverse(string s){
	string str = "";
	vector<string>v;

	//first we store the words in our vector of string
	//after that we will print from back

	for(int i = 0; i<s.size(); i++){

		if(s[i] == ' '){
			v.push_back(str);
			str = " ";
		}
		else{
			str += s[i];
		}
	}

	//last word remaining add it to the vector
	v.push_back(str);

	for(int i = v.size()-1; i>=0; i--){
		cout<<v[i]<<" ";
	}

}

int main(){

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	string s = "hello World";
	PrintReverse(s);

	return 0;
}