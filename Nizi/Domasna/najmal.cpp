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

int najmal(int *niza, int n)
{
    if (n <= 0)
        return 0;

    int najmal = niza[0];

    for (int i = 1; i < n; i++)
    {
        if (niza[i] < najmal)
            najmal = niza[i];
    }

    return najmal;
}

int main()
{
    int n;
    cout << "Vnesete ja goleminata na nizata ==>";
    cin >> n;

    int niza[n];

    popolniNiza(niza, n);

    cout << "Najmaliot broj e: " << najmal(niza, n) << endl;

    return 0;
}