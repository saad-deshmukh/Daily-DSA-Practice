/*   Given a string S consisting of N characters of the English alphabet, 
the task is to check if the given string is a palindrome. 
If the given string is a palindrome, then print “Yes“. Otherwise, print “No“.*/ 

#include <bits/stdc++.h>
using namespace std;


string isPalindrome(string S)
{
	
	string P = S;

	// Reverse the string P
	reverse(P.begin(), P.end());

	// If S is equal to P
	if (S == P) {
		// Return "Yes"
		return "Yes";
	}
	// Otherwise
	else {
		// return "No"
		return "No";
	}
}

// Driver Code
int main()
{
	string S ;
	cout << " enter the string ";
	cin >> S;
	cout << isPalindrome(S);

	return 0;
}
