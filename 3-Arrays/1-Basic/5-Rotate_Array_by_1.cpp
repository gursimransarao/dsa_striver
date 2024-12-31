
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> temp(n);

        // this is right shift

        for (int i = 0; i < nums.size(); i++)
        {
            temp[(1 + i) % n] = nums[i];
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