#include <bits/stdc++.h>
using namespace std;

int MaximumNo(int size, int arr[])
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}

int MinimumNo(int size, int arr[])
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}

int main()
{
    int size;
    cout << "Enter the value of size" << endl;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum Number in an array is " << MaximumNo(size, arr) << endl;
    cout << "Minimum Number in an array is " << MinimumNo(size, arr) << endl;
}