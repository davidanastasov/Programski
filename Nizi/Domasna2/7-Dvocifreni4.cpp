// 7. Да се напише програма во која се внесуваат n броеви.
// Да се испечатат сите двоцифрени броеви чија цифра на единици е 4
// и сите парни броеви кои се делат со 6.
// Печатење на елементите на низата да се резлизира со посебни функции.

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

void pecatiDvocifreni(int niza[], int n)
{
    cout << "Dvocifreni elementi vo nizata koi zavrsuvaat na 4 se: ";
    for (int i = 0; i < n; i++)
    {
        // Proveruva dali e dvocifren, 100 / 10 = 10
        int x = abs(niza[i]) / 10;

        // Dvocifren: ako x e pogolem od 0 i pomal od 10
        if (x > 0 && x < 10)
            if (niza[i] % 10 == 4)
                cout << niza[i] << " ";
    }
    cout << endl;
}

void pecatiParniDelivi(int niza[], int n, int delitel)
{
    cout << "Parni broevi vo nizata koi se delivi so 6 se: ";
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

    pecatiDvocifreni(niza, n);
    pecatiParniDelivi(niza, n, 6);

    return 0;
}
