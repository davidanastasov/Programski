#include <iostream>

using namespace std;

bool prost(int i)
{
    bool isProst = true;
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            isProst = false;
            break;
        }
    }
    return isProst;
}

int main()
{
    int n;
    cout << "n ==>";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (prost(i))
            cout << i << " ";
    }

    return 0;
}