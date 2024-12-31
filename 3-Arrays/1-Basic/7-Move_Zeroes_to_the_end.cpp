
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0, j = 0;
        int n = nums.size();

        // if size= 1
        if (n == 1)
        {
            return;
        }

        // if size is greater than 1
        while (i < n && j < n)
        {

            while (i < n && nums[i] != 0) // checking i<n first is important as in test case with all zeros, i can go out of bounds
            {
                i++;
            }

            if (j <= i)
            { // ensure j remains in front
                j = i + 1;
            }
            while (j < n && nums[j] == 0)
            {
                j++;
            }

            if (i < n && j < n)
            {
                swap(nums[i], nums[j]);
                // After swapping, move i to the next position
                i++;
            }
        }
    }
};

int main()
{

    int arr[] = {0, 1, 0, 3, 12};

    return 0;
}