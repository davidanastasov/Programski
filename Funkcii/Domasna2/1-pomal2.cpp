#include <iostream>

using namespace std;

int pomal(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int pogolem(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int a, b, c;
    cout << "a ==>";
    cin >> a;
    cout << "b ==>";
    cin >> b;
    cout << "c ==>";
    cin >> c;

    int najmal = pomal(pomal(a, b), c);
    int najgolem = pogolem(pogolem(a, b), c);

    b = a + b + c - najmal - najgolem;
    a = najmal;
    c = najgolem;

    cout << a << " " << b << " " << c << endl;

    return 0;
}