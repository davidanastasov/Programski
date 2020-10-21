#include <iostream>

using namespace std;

int factorial(int n)
{
    int proizvod = 1;

    for (int i = 1; i <= n; i++)
    {
        proizvod *= i;
    }

    return proizvod;
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;

    int rezultat = factorial(n);
    cout << rezultat;

    return 0;
}