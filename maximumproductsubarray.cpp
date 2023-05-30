#include <bits/stdc++.h>
using namespace std;

void maximumProductsubarrya(int size, int arr[])
{
    int product = 1;
    int maxproduct = arr[0];
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
        maxproduct = max(maxproduct, product);

        if (product == 0)
        {
            product = 0;
        }
    }
    cout << maxproduct << endl;
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

    maximumProductsubarrya(size, arr);
}