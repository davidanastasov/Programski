#include <iostream>

using namespace std;

void delivi(int n, int delitel)
{
    cout << "Delivi so " << delitel << " od 1 do " << n << " se: ";

    for (int i = 1; i <= n; i++)
    {
        if (i % delitel == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;

    delivi(n, 4);
    delivi(n, 9);

    return 0;
}