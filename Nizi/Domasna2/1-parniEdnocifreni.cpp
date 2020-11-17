// 1. Да се напише програма во која се внесуваат n броеви.
// Со посебни функции да се изброи и испечати колку од броевите се парни и едноцифрени,
// а колку од броевите се непарни и двоцифрени.

#include <iostream>
#include <cmath>

using namespace std;

void popolniNiza(int niza[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Broj " << i + 1 << " ==>";
        cin >> niza[i];
    }
}

int izbroiParniEdnocifreni(int niza[], int n)
{
    int brojac = 0;
    for (int i = 0; i < n; i++)
    {
        // Ednocifren paren
        if (abs(niza[i]) < 10 && niza[i] % 2 == 0)
            brojac++;
    }
    return brojac;
}

int izbroiNeparniDvocifreni(int niza[], int n)
{
    int brojac = 0;
    for (int i = 0; i < n; i++)
    {
        // Proveruva dali e dvocifren, 100 / 10 = 10
        int x = abs(niza[i]) / 10;

        // Dvocifren: ako x e pogolem od 0 i pomal od 10
        if (x > 0 && x < 10)
            if (niza[i] % 2 != 0)
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

    int brojParni = izbroiParniEdnocifreni(niza, n);
    cout << "Parni ednocifreni broevi: " << brojParni << "/" << n << endl;

    int brojNeparni = izbroiNeparniDvocifreni(niza, n);
    cout << "Neparni dvocifreni broevi: " << brojNeparni << "/" << n << endl;

    return 0;
}