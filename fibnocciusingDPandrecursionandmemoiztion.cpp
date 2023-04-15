#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    // STEP 03 ) CHECK IF DP HAS VALUE =-1, THEN REPLACE
    if (dp[n] != -1)
    {
        return dp[n];
    }
    // STEP 02 ) INSERT IN DP ARRRAY
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    // STEP 01 ) CREATE DP ARRAY
    vector<int> dp(n + 1);
    for (int i = 0; i <= n; i++)
        dp[i] = -1;
    cout << fib(n, dp) << endl;
    return 0;
}