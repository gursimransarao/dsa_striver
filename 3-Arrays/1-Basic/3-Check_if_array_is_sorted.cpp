
#include <bits/stdc++.h>
using namespace std;

// There are two cases, where true could be returned. if arr[i-1]> arr[i]  (we want only one occurence of this as that would be pivot )and where arr[n-1]>arr[0] (this is if array is not rotated only sorted). so count > 1 would mean more than 1 pivots where we return false.

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[i - 1])
            {
                count++;
            }
        }
        if (nums[n - 1] > nums[0])
        {
            count++;
        }
        if (count <= 1)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{

    return 0;
}