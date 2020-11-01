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

void pecatiNajgolem(int *niza, int n)
{
    if (n <= 0)
        return;

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (niza[i] > niza[index])
            index = i;
    }

    cout << "Najgolemiot broj e " << niza[index] << " so index " << index << endl;
}

int main()
{
    int n;
    cout << "Vnesete ja goleminata na nizata ==>";
    cin >> n;

    int niza[n];

    popolniNiza(niza, n);
    pecatiNajgolem(niza, n);

    return 0;
}