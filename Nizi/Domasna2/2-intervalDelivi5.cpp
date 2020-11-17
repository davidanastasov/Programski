// 2. Да се напише програма во која се внесуваат n броеви.
// Да се изброи и испечати колку од броевите се наоѓаат во интервалот [50,150]
// и истовремено се делат со 5. Броење на елементите на низата да се резлизира со функција.

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

int izbroiIntervalDelivi(int niza[], int n, int interval_od, int interval_do)
{
    int brojac = 0;
    for (int i = 0; i < n; i++)
    {
        int broj = niza[i];
        // Proveruva dali brojot e od interval_od i do interval_do
        if (broj >= interval_od && broj <= interval_do)
        {
            // Proveruva dali brojot e deliv so 5
            if (broj % 5 == 0)
                brojac++;
        }
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

    int interval_od = 50, interval_do = 150;
    cout << "Broevi vo nizata koi sto se od " << interval_od << " do " << interval_do << ": ";
    cout << izbroiIntervalDelivi(niza, n, interval_od, interval_do) << endl;

    return 0;
}