#include <iostream>

using namespace std;

bool pogolem(int a, int b)
{
    return a > b;
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

    int x;
    if (pogolem(a, c))
    {
        x = a;
        a = c;
        c = x;
    }

    if (pogolem(a, b))
    {
        x = a;
        a = b;
        b = x;
    }

    if (pogolem(b, c))
    {
        x = b;
        b = c;
        c = x;
    }

    cout << a << " " << b << " " << c;

    return 0;
}