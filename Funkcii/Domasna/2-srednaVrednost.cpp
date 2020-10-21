#include <iostream>

using namespace std;

float srednaVrednost(int n)
{
    int zbir = 0;

    for (int i = 1; i <= n; i++)
    {
        zbir += i;
    }

    return zbir / 2.0;
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;

    float rezultat = srednaVrednost(n);
    cout << rezultat;

    return 0;
}