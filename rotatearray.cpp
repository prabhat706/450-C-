// APPROACH 01      wITH TIME COMPLEXITY OF O(N POWER 2)

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int size;
//     cout << "Enter the size" << endl;
//     cin >> size;

//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = size - 1; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

//  APPROACH 02            WITH TIME COMPLEXITY OF O(N)

#include <bits/stdc++.h>
using namespace std;

void RotateArray(int size, int arr[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            swap(arr[i], arr[j]);
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    RotateArray(size, arr);

    cout << "Rotate Arrays is" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
