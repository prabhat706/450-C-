#include <bits/stdc++.h>
using namespace std;

void intersectionArray(int size1, int arr1[], int size2, int arr2[])
{
    for (int i = 0; i < size1; i++)
    {
        bool flag = 0;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                flag = 1;
            }
            if (flag = 0)
            {
                cout << "no Element found same" << endl;
            }
        }
    }
}

void unionArray(int size1, int arr1[], int size2, int arr2[])
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            
        }
    }
}

int main()
{
    int size1;
    cout << "Enter the value of size1" << endl;
    cin >> size1;

    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    int size2;
    cout << "Enter the value of size2" << endl;
    cin >> size2;

    int arr2[size2];
    for (int j = 0; j < size2; j++)
    {
        cin >> arr2[j];
    }

    intersectionArray(size1, arr1, size2, arr2);
}