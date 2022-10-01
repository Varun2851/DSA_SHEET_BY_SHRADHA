#include<bits/stdc++.h>
using namespace std;

int solve(int n){

	//there will be only two cases n may be + or -
	//check if the number is + or -
	bool ispositive = (n>0);

	int result = 0; //this is the number which we will return 

	//now convert negative number to positive
	n = abs(n);  
	//1. after converting number to positive then calculate the freq by making the freq array of size 10
	int freq[10] = {0};

	//2.calculate the freq of each digit in the number

	while(n){
		int d = n%10;
		freq[d]++;
		n = n/10;
	}

	if(ispositive){

		//means number is positive
		//if the number is positive then we will put the largest number at the first position

		for(int i = 9; i>=0; i--){
			if(freq[i]){
				result = i;
				freq[i]--;
				break;
			}
		}
		//After placing the largest digit at the first position , we have to make the largest number so put the largrst digit first

		for(int i = 9; i>=0; i--){
			while(freq[i]){
				result = result*10+i;
				freq[i]--;
			}
		}

	}
	else{

		//means number is negtaive
		//we have to make largest number but the no is negative so we will put the smallest digit at first pos

		for(int i = 1; i<=9; i++){
			while(freq[i]){
				result = result*10+i;
				freq[i]--;
				break;
			}
		}

		for(int i = 1; i<=9; i++){
			while(freq[i]){
				result = result*10+i;
				freq[i]--;
			}
		}

		result = -1*result;
	}
	return result;

}

int main(){

	int num1 =  570107;
	int num2 = -691005;

	cout<<solve(num1);
	cout<<endl;
	cout<<solve(num2);

	return 0;
}