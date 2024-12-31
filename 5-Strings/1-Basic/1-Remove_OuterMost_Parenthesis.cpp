#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        int n = s.length(); // Get the length of the input string.
        int cnt = 0;        // A counter to track the balance of parentheses.
        string ans;         // The resulting string after removing outer parentheses.

        // Iterate through each character in the input string.
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                // If we encounter an opening parenthesis '(':
                if (cnt != 0)
                {
                    // If the counter is not zero, it means this '(' is not the outermost.
                    ans += s[i]; // Add it to the result.
                }
                cnt++; // Increase the counter since we encountered an opening parenthesis.
            }
            else if (s[i] == ')')
            {
                // If we encounter a closing parenthesis ')':
                if (cnt > 1)
                {
                    // If the counter is greater than 1, it means this ')' is not the outermost.
                    ans += s[i]; // Add it to the result.
                }
                cnt--; // Decrease the counter since we encountered a closing parenthesis.
            }
        }
        return ans; // Return the modified string after removing outer parentheses.
    }
};

int main()
{

    return 0;
}