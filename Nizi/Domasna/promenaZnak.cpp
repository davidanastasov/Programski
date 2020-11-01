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

int izbrojPromeni(int *niza, int n)
{
    if (n <= 0)
        return 0;

    int promeni;
    for (int i = 1; i < n; i++)
    {
        if ((niza[i - 1] < 0 && niza[i] >= 0) || (niza[i - 1] >= 0 && niza[i] < 0))
            promeni++;
    }

    return promeni;
}

int main()
{
    int n;
    cout << "Vnesete ja goleminata na nizata ==>";
    cin >> n;

    int niza[n];

    popolniNiza(niza, n);

    cout << "Promeni na znakot vo nizata: " << izbrojPromeni(niza, n) << endl;

    return 0;
}