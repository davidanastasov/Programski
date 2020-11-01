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

void pecatiNiza(int *niza, int n)
{
    for (int i = 0; i < n; i++)
        cout << niza[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Vnesete ja goleminata na nizata ==>";
    cin >> n;

    if (n < 2)
    {
        cout << "Nizata mora da ima najmalku 2 broevi" << endl;
        return 0;
    }

    int niza[n];
    popolniNiza(niza, n);

    int pomali[n], indexPomali = 0;
    for (int i = 0; i < n; i++)
    {
        if (niza[i] < niza[1])
            pomali[indexPomali++] = niza[i];
    }

    if (indexPomali > 0)
    {
        cout << "Pomali broevi od " << niza[1] << " se: ";
        pecatiNiza(pomali, indexPomali);
    }
    else
        cout << "Nema pomali broevi od " << niza[1] << endl;

    return 0;
}