// 10. Да се напише програма во која се внесуваат n броеви.
// Да се пресмета и испечати колку од броевите се наоѓаат во
// третата стотка и истовремено се непарни броеви,
// и збир на едноцифрените прости броеви.
// Пресметување број и збир на елементите на низата да се резлизира со посебни функции.

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

int izbrojTretaStotkaNeparni(int niza[], int n)
{
    int brojac = 0;
    for (int i = 0; i < n; i++)
    {
        if (niza[i] / 100 == 3)
        {
            if (niza[i] % 2 != 0)
                brojac++;
        }
    }
    return brojac;
}

bool prost(int i)
{
    bool isProst = true;
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            isProst = false;
            break;
        }
    }
    return isProst;
}

int zbirProsti(int niza[], int n)
{
    int zbir = 0;
    for (int i = 0; i < n; i++)
    {
        if (niza[i] / 10 == 0 && prost(niza[i]))
            zbir += niza[i];
    }
    return zbir;
}

int main()
{
    int n;
    cout << "Kolku broevi ke vnesete ==>";
    cin >> n;

    int niza[n];
    popolniNiza(niza, n);

    cout << "Brojot na neparni elementi od tretata stotka vo nizata e: ";
    cout << izbrojTretaStotkaNeparni(niza, n) << endl;

    cout << "Zbirot na site prosti ednocifreni broevi vo nizata e: " << zbirProsti(niza, n) << endl;

    return 0;
}