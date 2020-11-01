#include <iostream>

using namespace std;

int main()
{
    // Ja vnesuvame goleminata na nizata
    int golemina_na_niza;
    cout << "Vnesete ja goleminata na nizata ==>";
    cin >> golemina_na_niza;

    // Deklarirame nova niza
    int niza[golemina_na_niza];

    // Ja popolnuvame nizata
    for (int i = 0; i < golemina_na_niza; i++)
    {
        cout << "Element " << i + 1 << " ==>";
        cin >> niza[i];
    }

    return 0;
}