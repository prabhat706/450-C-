#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cin >> size;

    int arr1[size];
    for (int i = 0; i < size; i++)
        cin >> arr1[i];
    int arr2[size];
    for (int i = 0; i < size; i++)
        cin >> arr2[i];

    int ans1[size] = {0};

    for (int i = 0; i < size; i++)
    {

        bool flag = 1;

        for (int j = 0; j < size; j++)
        {

            if (arr1[i] == arr2[j])
            {

                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {

            ans1[i] = arr1[i];
        }
    }
    int ans2[size] = {0};

    for (int i = 0; i < size; i++)
    {

        bool flag = 1;

        for (int j = 0; j < size; j++)
        {

            if (arr2[i] == arr1[j])
            {

                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {

            ans2[i] = arr2[i];
        }
    }
    cout << "The element in 1st array which are not there in second array are: ";
    for (int i = 0; i < size; i++)
    {

        if (ans1[i] != 0)
        {

            cout << ans1[i] << " ";
        }
    }
    cout << endl;

    cout << "The element in 2nd array which are not there in 1st array are: ";
    for (int i = 0; i < size; i++)
    {

        if (ans2[i] != 0)
        {
            cout << ans2[i] << " ";
        }
    }
    cout << endl;
}