#include <iostream>

using namespace std;

int main()
{
    // Deklariranje na niza so golemina 1000
    int niza[1000];

    // Vnesuvanje na 1000 broevi (eden po eden)
    for (int i = 0; i < 1000; i++)
    {
        cin >> niza[i];
    }

    // Pecatenje na broevite od nizata vo obraten redosled
    for (int i = 999; i >= 0; i--)
    {
        cout << niza[i] << endl;
    }

    return 0;
}