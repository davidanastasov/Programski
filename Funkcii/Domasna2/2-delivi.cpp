#include <iostream>

using namespace std;

bool deliv(int n, int m)
{
    return n % m == 0;
}

int main()
{
    int n;
    cout << "n ==>";
    cin >> n;

    cout << "Brojot " << n << " se deli so: ";
    for (int i = 1; i <= n; i++)
    {
        if (deliv(n, i))
            cout << i << " ";
    }
    return 0;
}