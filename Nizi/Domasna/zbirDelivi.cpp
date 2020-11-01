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

int zbirDelivi(int *niza, int n, int delitel)
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
    cout << "Vnesete ja goleminata na nizite ==>";
    cin >> n;

    int niza[n];
    popolniNiza(niza, n);

    cout << "Zbirot na broevite vo nizata delivi so 3 e: " << zbirDelivi(niza, n, 3) << endl;

    return 0;
}