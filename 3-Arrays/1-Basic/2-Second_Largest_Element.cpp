
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 5, 10, 2, 3, 4, 5, 5, 10};

    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        // we keep on putting largest value in max and before giving it new value, pass the old to smax
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        // here we're checking if value is lower than max but greater than second max
        else if (arr[i] > smax && arr[i] < max)
        {
            smax = arr[i];
        }
    }

    // if arr is such {10,10}, as there is largest as well as second largest we return -1
    if (smax == max)
        cout << -1;
    else // otherwise return smax
        cout << smax;

    return 0;
}