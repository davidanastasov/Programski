// 6. Да се напише програма во која се внесуваат n броеви.
// Да се определи колку од внесените броеви припаѓаат на интервалот [10,50].
// Пресметување број на елементите на низата да се резлизира со функција.

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

int izbroiInterval(int niza[], int n, int interval_od, int interval_do)
{
    int brojac = 0;
    for (int i = 0; i < n; i++)
    {
        // Proveruva dali brojot e od interval_od i do interval_do
        if (niza[i] >= interval_od && niza[i] <= interval_do)
            brojac++;
    }
    return brojac;
}

int main()
{
    int n;
    cout << "Kolku broevi ke vnesete ==>";
    cin >> n;

    int niza[n];
    popolniNiza(niza, n);

    int interval_od = 10, interval_do = 50;
    cout << "Broevi vo nizata koi sto se od " << interval_od << " do " << interval_do << ": ";
    cout << izbroiInterval(niza, n, interval_od, interval_do) << endl;

    return 0;
}