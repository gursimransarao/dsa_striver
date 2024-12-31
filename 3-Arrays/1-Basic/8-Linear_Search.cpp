
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K)
    {

        // bruteforce
        int i = 0;
        while (i < N)
        {
            if (arr[i] == K)
            {
                return 1;
            }
            i++;
        }
        return -1;
    }
};

int main()
{

    return 0;
}