
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evenlyDivides(int N)
    {
        // code here
        int count = 0;
        int num = N;
        while (N != 0)
        {
            int temp = N % 10;
            if (temp != 0 && num % temp == 0) // checking temp should not be zero because num/0 not allowed
            {
                count++;
            }
            N = N / 10;
        }
        return count;
    }
};

int main()
{

    return 0;
}