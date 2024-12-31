
#include <bits/stdc++.h>
using namespace std;
// class Solution
// {
// public:
//     int findMaxConsecutiveOnes(vector<int> &nums)
//     {
//         int i = 0;
//         int j = 0;

//         int n = nums.size();
//         int count = 0, ans = 0;
//         // if length of nums is 1
//         if (n == 1)
//         {
//             if (nums[i] == 0)
//             {
//                 return 0;
//             }
//             else
//             {
//                 return 1;
//             }
//         }
//         // if length is greater than 1
//         else
//         {

//             while (i < n && j < n)
//             {
//                 while (i < n && nums[i] == 0)
//                 {
//                     i++;
//                 }
//                 if (j <= i)
//                     j = i;

//                 while (j < n && j != n - 1 && nums[j + 1] == 1)
//                 {
//                     j++;
//                 }

//                 if (i < n && j < n)
//                 {
//                     count = j - i + 1;
//                 }

//                 if (count > ans)
//                 {
//                     ans = count;
//                 }

//                 i++;
//             }

//             return ans;
//         }
//     }
// };

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int max_count = 0;
        int current_count = 0;

        for (int num : nums)
        {
            if (num == 1)
            {
                current_count++;
                max_count = max(max_count, current_count);
            }
            else
            {
                current_count = 0;
            }
        }

        return max_count;
    }
};

int main()
{

    return 0;
}