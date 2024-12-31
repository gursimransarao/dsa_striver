
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return 0;
        }
        int temp = x;
        long long int ans = 0;

        while (temp != 0)
        {
            int digit = temp % 10;
            temp = temp / 10;
            ans = (ans * 10) + digit;
        }

        if (ans == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    return 0;
}