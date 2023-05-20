#include <bits/stdc++.h>
using namespace std;

int firstOccurance(int arr[], int size, int k)
{
    int start = 0;
    int end = size - 1;
    int i = 0;
    int ans = 0;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
            return mid;
        }
        if (arr[mid] < k)
        {
            start = mid + 1;
            return i;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
            return i;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int lastOccurance()