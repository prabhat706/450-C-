#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    reverseArray(arr, size);
    printArray(arr, size);
}