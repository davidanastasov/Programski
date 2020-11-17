// 5. Да се напише програма во која се внесуваат n броеви.
// Да се пресмета и испечати производ на броевите што се наоѓаат на
// позиција која се дели со 4, и збир на елементите кои се делат со 4.
// Пресметување производ и збир на елементите на низата да се резлизира со посебни функции.

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

int proizvodIndexDelivi(int niza[], int n, int delitel)
{
    int proizvod = 1;
    for (int i = delitel; i < n; i += delitel)
    {
        if (i % delitel == 0)
            proizvod *= niza[i];
    }
    return proizvod;
}

int zbirDelivi(int niza[], int n, int delitel)
{
    int zbir = 0;
    for (int i = 0; i < n; i++)
    {
        if (niza[i] % delitel == 0)
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

    cout << "Proizvodot na elementite civ index e deliv so 4 e: " << proizvodIndexDelivi(niza, n, 4) << endl;
    cout << "Zbirot na elementite delivi so 4 e: " << zbirDelivi(niza, n, 4) << endl;

    return 0;
}