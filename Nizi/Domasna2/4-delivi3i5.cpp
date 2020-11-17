// 4. Да се напише програма во која се внесуваат n броеви.
// Да се испечатат на екран сите оние броеви што се делат со 3 и елементите кои се делат со 5.
// Печатење на елементите на низата да се резлизира со функција.

#include <iostream>

using namespace std;

void popolniNiza(int niza[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Broj " << i + 1 << " ==>";
        cin >> niza[i];
    }
}

void pecatiDelivi(int niza[], int n, int delitel)
{
    cout << "Broevi vo nizata delivi so " << delitel << " se: ";
    for (int i = 0; i < n; i++)
    {
        if (niza[i] % delitel == 0)
            cout << niza[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Kolku broevi ke vnesete ==>";
    cin >> n;

    int niza[n];
    popolniNiza(niza, n);

    pecatiDelivi(niza, n, 3);
    pecatiDelivi(niza, n, 5);

    return 0;
}