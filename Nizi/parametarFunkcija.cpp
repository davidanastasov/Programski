#include <iostream>
#include <typeinfo>

using namespace std;

void vnesi_niza(int a[], int n)
{
    cout << typeid(a).name() << endl;

    int niza[5];
    cout << typeid(niza).name() << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void pecati_niza(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int n;
    cout << "Vnesi go brojot na elementi na nizata" << endl;
    cin >> n;
    int niza[n];

    cout << "Vnesi gi elementite na nizata: " << endl;
    vnesi_niza(niza, n);

    cout << "Vnesena e nizata:" << endl;
    pecati_niza(niza, n);

    return 0;
}