#include <iostream>

using namespace std;

int izbrojNeparni(int n, int m)
{
    int neparni = 0;

    int od = n % 2 != 0 ? n : n + 1;
    for (int i = od; i <= m; i += 2)
    {
        cout << i << endl;
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