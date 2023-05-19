#include <bits/stdc++.h>
using namespace std;

void subsetFirstarray(int n, int m, int arr1[], int arr2[])
{
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr2[j] == arr1[i])
            {
                cout << arr2[j] << " ";
                cout << "Yes" << endl;
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        cout << "Second Array is not a subset of First Array" << endl;
    }
}

int main()
{
    int n, m;
    cout << "Enter the value of n and m" << endl;
    cin >> n >> m;

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int arr2[m];
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }

    subsetFirstarray(n, m, arr1, arr2);
}