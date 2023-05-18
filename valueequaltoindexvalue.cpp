#include <bits/stdc++.h>
using namespace std;

void valueEqualtoIndexvalue(int size, int arr[])
{
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] == i)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int size;
    cout << "Enter the value of size" << endl;
    cin >> size;

    int arr[size];
    for (int i = 1; i <= size; i++)
    {
        cin >> arr[i];
    }

    valueEqualtoIndexvalue(size, arr);
}