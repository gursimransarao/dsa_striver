
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> temp; // Vector to store individual words
        string str = "";     // Temporary string to accumulate characters for a word

        // Loop through each character in the input string `s`
        for (int i = 0; i < s.length(); i++)
        {
            // If the current character is a space
            if (s[i] == ' ')
            {
                // If `str` is not empty, it means we have accumulated a word
                if (str != "")
                {
                    temp.push_back(str); // Push the word into the `temp` vector
                    str = "";            // Reset `str` to start accumulating the next word
                }
            }
            // If the current character is not a space (it's part of a word)
            else
            {
                str += s[i]; // Append the character to the current word

                // If we reach the last character in the string, store the last word
                if (i == s.length() - 1)
                {
                    temp.push_back(str); // Push the final word into the vector
                }
            }
        }

        string ans = ""; // To store the final reversed result

        // Loop through the `temp` vector in reverse order to reverse the words
        for (int j = temp.size() - 1; j >= 0; j--)
        {
            ans += temp[j]; // Add the word to the result string

            // Add a space between words, but avoid adding it after the last word
            if (j != 0)
            {
                ans += " "; // Add a space between words
            }
        }

        return ans; // Return the final reversed sentence
    }
};

int main()
{

    return 0;
}