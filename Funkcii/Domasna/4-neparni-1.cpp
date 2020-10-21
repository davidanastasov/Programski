#include <iostream>

using namespace std;

int izbrojNeparni(int n, int m)
{
    int neparni = 0;

    for (int i = n; i <= m; i++)
    {
        if (i % 2 != 0)
            neparni++;
    }

    return neparni;
}

int main()
{
    int n, m;
    cout << "Od ==>";
    cin >> n;

    cout << "Do ==>";
    cin >> m;

    int neparni = izbrojNeparni(n, m);
    cout << "Od " << n << " do " << m << " ima " << neparni << " neparni broevi" << endl;

    return 0;
}