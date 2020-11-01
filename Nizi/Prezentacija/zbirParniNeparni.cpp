#include <iostream>

using namespace std;

int main()
{
    // Korisnikot ja vnesuva goleminata na nizata
    int n;
    cout << "Kolku broevi ke vnesete ==>";
    cin >> n;

    // Deklarirame nova niza
    int broevi[n];

    // Korisnikot ja popolnuva nizata so broevi
    for (int i = 0; i < n; i++)
    {
        cout << "Broj " << i + 1 << " ==>";
        cin >> broevi[i];
    }

    // Odime niz nizata i barame zbir na parni i neparni broevi.
    int zbirPozitivni = 0, zbirNegativni = 0;
    for (int i = 0; i < n; i++)
    {
        int broj = broevi[i];
        if (broj > 0)
            zbirPozitivni += broj;
        else
            zbirNegativni += broj;
    }

    cout << "Zbirot na pozitivnite elementi: " << zbirPozitivni << endl;
    cout << "Zbirot na negativnite elementi: " << zbirNegativni << endl;

    return 0;
}
