#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Golemina na nizata ==>";
    cin >> n;

    int niza[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Broj " << i + 1 << " ==>";
        cin >> niza[i];
    }

    int zbir = 0;
    for (int i = 0; i < n; i++)
    {
        zbir += niza[i];
    }

    cout << "Zbirot na broevite e " << zbir;
    return 0;
}