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

void pecatiNiza(int *niza, int n, string prefix)
{
    cout << prefix;
    for (int i = 0; i < n; i++)
        cout << niza[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Vnesete ja goleminata na nizata ==>";
    cin >> n;

    int niza[n];
    popolniNiza(niza, n);

    int parni[n], neparni[n];
    int indexParni = 0, indexNeparni = 0;
    for (int i = 0; i < n; i++)
    {
        if (niza[i] % 2 == 0)
            parni[indexParni++] = niza[i];
        else
            neparni[indexNeparni++] = niza[i];
    }

    pecatiNiza(parni, indexParni, "Parni broevi se: ");
    pecatiNiza(neparni, indexNeparni, "Neparni broevi se: ");

    return 0;
}