
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int reverse(long long int x)
    {
        long long int ans = 0, digit = 0;
        bool neg = 0;
        if (x < 0)
        {
            neg = 1;
            x = -x;
        }
        while (x > 0)
        {
            digit = x % 10;
            x = x / 10;
            ans = (10 * ans) + digit;
        }
        if (neg)
        {
            ans = -ans;
        }
        if (ans >= pow(-2, 31) && ans <= (pow(2, 31) - 1))
        {
            return ans;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{

    return 0;
}