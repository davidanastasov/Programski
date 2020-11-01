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

int main()
{
    int n;
    cout << "Vnesete ja goleminata na nizata ==>";
    cin >> n;

    int niza[n];
    popolniNiza(niza, n);

    int zbirPozitivni = 0, zbirNegativni = 0;
    for (int i = 0; i < n; i++)
    {
        if (niza[i] >= 0)
            zbirPozitivni += niza[i];
        else
            zbirNegativni += niza[i];
    }

    cout << "Zbir na pozitivni broevi: " << zbirPozitivni << endl;
    cout << "Zbir na negativni broevi: " << zbirNegativni << endl;

    return 0;
}