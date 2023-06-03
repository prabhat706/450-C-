#include <bits/stdc++.h>
using namespace std;

void reachhome(int src, int dest)
{

    cout << "source" << src << " " << "destination " << dest << endl;
    if (src == dest)
    {
        cout << "phuch gya ghar" << endl;
        return;
    }
    src++;
    reachhome(src, dest);
}

int main()
{
    int dest = 20;
    int src = 1;
    cout << endl;
    reachhome(src, dest);
}