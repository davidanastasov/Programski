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

int izbrojParni(int *niza, int n)
{
    int brojac = 0;
    for (int i = 0; i < n; i++)
    {
        if (niza[i] % 2 == 0)
            brojac++;
    }

    return brojac;
}

int main()
{
    int n;
    cout << "Vnesete ja goleminata na nizite ==>";
    cin >> n;

    int a[n], b[n];
    cout << "Popolnete ja prvata niza" << endl;
    popolniNiza(a, n);
    cout << "Popolnite ja vtorata niza" << endl;
    popolniNiza(b, n);

    int aParni = izbrojParni(a, n);
    int bParni = izbrojParni(b, n);
    if (aParni == bParni)
        cout << "Nizite imaat ednakov broj na parni broevi";
    else if (aParni > bParni)
        cout << "Prvata niza ima povekje parni broevi od vtorata niza";
    else
        cout << "Vtorata niza ima povekje parni broevi od prvata niza";

    return 0;
}