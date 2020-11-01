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

int main()
{
    int n;
    cout << "Vnesete ja goleminata na nizite ==>";
    cin >> n;

    int a[n], b[n];
    cout << "Popolnete ja prvata niza" << endl;
    popolniNiza(a, n);
    cout << "Popolnite ja vtorata niza" << endl;
    popolniNiza(b, n);

    int zbir = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            cout << " + ";
        cout << a[i] << " * " << b[i];

        zbir += a[i] * b[i];
    }
    cout << " = " << zbir << endl;

    return 0;
}