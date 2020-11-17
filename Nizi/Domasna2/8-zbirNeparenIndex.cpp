// 8. Да се напише програма во која се внесуваат n броеви.
// Да се пресмета и испечати збир на броевите што се наоѓаат на непарна позиција.
// Пресметување збор на елементите на низата да се резлизира со функција.

#include <iostream>

using namespace std;

void popolniNiza(int niza[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Broj " << i + 1 << " ==>";
        cin >> niza[i];
    }
}

int zbirNeparenIndex(int niza[], int n)
{
    int zbir = 0;
    for (int i = 1; i < n; i += 2)
    {
        zbir += niza[i];
    }
    return zbir;
}

int main()
{
    int n;
    cout << "Kolku broevi ke vnesete ==>";
    cin >> n;

    int niza[n];
    popolniNiza(niza, n);

    cout << "Zbir na broevite so neparen index: " << zbirNeparenIndex(niza, n) << endl;

    return 0;
}