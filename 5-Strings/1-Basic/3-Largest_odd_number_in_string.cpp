
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string largestOddNumber(string num)
    {
        // unsigned long long n = stoll(num);
        // unsigned long long ans=0;
        // while(n!=0){
        //     if(n%2!=0){
        //         ans=n;
        //         break;
        //     }
        //     n=n/10;
        // }
        // if(ans==0){
        //     return "";
        // }
        // else{
        //     return to_string(ans);
        // }
        // the above approach works for numbers upto 18 digits

        int n = num.size();
        int i = 0;

        for (i = n - 1; i >= 0; i--)
        {
            int digit = num[i] - '0'; // to convert char to int
            if (digit % 2 != 0)
            {
                return num.substr(0, i + 1);
            }
        }

        return "";
    }
};

int main()
{

    return 0;
}