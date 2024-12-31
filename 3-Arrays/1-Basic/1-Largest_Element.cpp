
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 3, 5, 10, 2, 3, 4, 5, 5, 6};

    int max = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }

    cout << max;

    return 0;
}