// C++ program for finding smallest number
// from digits of given number
#include<iostream>
using namespace std;

// function to find the smallest number
int smallest(int num)
{
	// initialize frequency of each digit to Zero
	int freq[10] = {0};
	
	// Checking Number is positive or Negative
	bool is_pos = (num>0);

	// Getting the absolute value of num
	num = abs(num);

	// count frequency of each digit in the number
	while (num)
	{
		int d = num % 10; // extract last digit
		freq[d]++; // increment counting
		num = num / 10; //remove last digit
	}
	
	int result = 0;

	// If it is positive Number then it should be smallest
	if(is_pos)
	{
	// Set the Leftmost digit to minimum except 0
	for (int i = 1 ; i <= 9 ; i++)
	{
		if (freq[i])
		{
			result = i;
			freq[i]--;
			break;
		}
	}

	// arrange all remaining digits
	// in ascending order
	for (int i = 0 ; i <= 9 ; i++)
		while (freq[i]--)
			result = result * 10 + i;
	}
	else // If negative then number should be Largest
	{
	// Set the Leftmost digit to maximum
	for (int i = 9 ; i >= 1 ; i--)
	{
		if (freq[i])
		{
			result = i;
			freq[i]--;
			break;
		}
	}
	
	// arrange all remaining digits
	// in descending order
	for (int i = 9 ; i >=0 ; i--)
		while (freq[i]--)
			result = result * 10 + i;

	// Negative number should be returned here
	result = -result;
	}
	return result;
}

// Driver Program
int main()
{
	int num = 570107;
	cout << smallest(num) << endl;

	int num2 = -691005;
	cout << smallest(num2);
	return 0;
}
