#include <iostream>
#include <cmath>

using namespace std;

int izbrojNeparni(int n, int m)
{
    return ceil((m - n) / 2.0);
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