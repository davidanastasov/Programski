// 3. Да се напише програма во која се внесуваат n броеви.
// Да се пресмета и испечати збир на броевите што се делат со 3.
// Пресметување збир на елементите на низата да се резлизира со функција.

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

int zbirDelivi(int niza[], int n, int delitel)
{
    int zbir = 0;
    for (int i = 0; i < n; i++)
    {
        if (niza[i] % delitel == 0)
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

    cout << "Zbirot na site broevi vo nizata delivi so 3 e: " << zbirDelivi(niza, n, 3) << endl;

    return 0;
}