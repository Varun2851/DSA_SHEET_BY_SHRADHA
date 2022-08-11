#include<bits/stdc++.h>
using namespace std;

int solve(string s){

	stack<int>st;

	for(int i = 0; i<s.size(); i++){
		if(s[i] >= '0' and s[i] <= '9'){
			st.push(s[i]-'0');
		}
		else{
			int op2 = st.top(); //we are extracting op2 first because op2 will be at the top not op1 ;
			st.pop();
			int op1 = st.top();
			st.pop();

			switch(s[i]){
				case '+' :
				st.push(op1+op2);
				break;

				case '-':
				st.push(op1-op2);
				break;

				case '*':
				st.push(op1*op2);
				break;

				case '/':
				st.push(op1/op2);
				break;
			}
		}
	}
	return st.top();
}

int main(){

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	string s = "46+2/5*7+";
	cout<<solve(s);

	return 0;
}