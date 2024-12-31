
#include <bits/stdc++.h>
using namespace std;

// this is right shift

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> temp(n);

        for (int i = 0; i < nums.size(); i++)
        {
            temp[(k + i) % n] = nums[i];
        }

        ////copy wapis to nums

        for (int i = 0; i < nums.size(); i++)
        {

            nums[i] = temp[i];
        }
    }
};

int main()
{

    return 0;
}