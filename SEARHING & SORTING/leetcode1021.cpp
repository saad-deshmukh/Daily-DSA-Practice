/*
A valid parentheses string is either empty "", "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.

For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.
A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.

Given a valid parentheses string s, consider its primitive decomposition: s = P1 + P2 + ... + Pk, where Pi are primitive valid parentheses strings.

Return s after removing the outermost parentheses of every primitive string in the primitive decomposition of s.

 

Example 1:

Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
Example 2:

Input: s = "(()())(())(()(()))"
Output: "()()()()(())"
Explanation: 
The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".
Example 3:

Input: s = "()()"
Output: ""
Explanation: 
The input string is "()()", with primitive decomposition "()" + "()".
After removing outer parentheses of each part, this is "" + "" = "".*/

#include <iostream>
#include <string>
using namespace std;

// Function to remove the outermost parentheses of every primitive group
string removeOuterParentheses(string s) {
    string result = ""; // To store the final output string
    int balance = 0;    // To keep track of the balance of parentheses

    // Iterate through each character in the input string
    for (int i = 0; i < s.size(); i++) {
        // If the current character is an opening parenthesis
        if (s[i] == '(') {
            // Add the opening parenthesis to the result only if it's not an outermost parenthesis
            if (balance > 0) {
                result += s[i];
            }
            // Increment balance to track unmatched opening parenthesis
            balance++;
        } else { 
            // If the current character is a closing parenthesis
            balance--; // Decrement balance to match an opening parenthesis

            // Add the closing parenthesis to the result only if it's not an outermost parenthesis
            if (balance > 0) {
                result += s[i];
            }
        }
    }
    // Return the final string with outermost parentheses removed
    return result;
}

int main() {
    string s = "(()())(())"; // Example input string
    string result = removeOuterParentheses(s); // Call the function
    cout << "Output after removing outer parentheses: " << result << endl; // Print the result
    return 0;
}
