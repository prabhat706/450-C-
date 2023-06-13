#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl; // 1 method to declare a vector
    }

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    { // 2 method to declare a vector
        cout << *it << endl;
    }

    for (auto element : v)
    { // 3 method to declare a vector
        cout << element << endl;
    }

    v.pop_back();

    vector<int> v2(4, 100);

    swap(v, v2);
    for (auto element : v)
    {
        cout << element << endl;
    }

    for (auto element : v2)
    {
        cout << element << endl;
    }
}