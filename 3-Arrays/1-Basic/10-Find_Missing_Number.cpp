
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int sum = n * (n + 1) / 2; // sum upto n numbers

        int arrSum = 0; // sum of provided array
        for (int i = 0; i < n; i++)
        {
            arrSum += nums[i];
        }

        return sum - arrSum;
    }
};

int main()
{

    return 0;
}