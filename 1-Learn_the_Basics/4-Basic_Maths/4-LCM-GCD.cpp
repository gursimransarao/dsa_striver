
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<long long> lcmAndGcd(long long A, long long B)
    {
        vector<long long> ans;

        // Edge case: if either number is 0
        if (A == 0)
        {
            ans.push_back(0); // LCM is 0 if either number is 0
            ans.push_back(B); // GCD is the non-zero number
            return ans;
        }
        if (B == 0)
        {
            ans.push_back(0); // LCM is 0 if either number is 0
            ans.push_back(A); // GCD is the non-zero number
            return ans;
        }

        // Store the original values of A and B
        long long originalA = A, originalB = B;

        // Calculate GCD using the efficient Euclidean algorithm (modulo)
        while (A != B)
        {
            if (A > B)
            {
                A = A - B;
            }
            else
            {
                B = B - A;
            }
        }
        long long gcd = A;

        // Calculate LCM using the relation: LCM(A, B) = (A * B) / GCD(A, B)
        long long lcm = abs(originalA * originalB) / gcd;

        // Push LCM and GCD to the result vector
        ans.push_back(lcm);
        ans.push_back(gcd);

        return ans;
    }
};

int main()
{

    return 0;
}