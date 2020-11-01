#include <iostream>

using namespace std;

void popolniNiza(int *niza, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Broj " << i + 1 << " ==>";
        cin >> niza[i];
    }
}

int izbrojEdnocifreni(int *niza, int n)
{
    int brojac = 0;
    for (int i = 0; i < n; i++)
    {
        if (niza[i] > -10 && niza[i] < 10)
            brojac++;
    }

    return brojac;
}

int main()
{
    int n;
    cout << "Vnesete ja goleminata na nizata ==>";
    cin >> n;

    int niza[n];

    popolniNiza(niza, n);

    int ednocifreni = izbrojEdnocifreni(niza, n);
    cout << "Vo nizata ima " << ednocifreni << " ednocifreni broevi" << endl;

    return 0;
}