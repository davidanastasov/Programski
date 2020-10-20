#include <iostream>

using namespace std;

void izmeni(int &x, int &y, int &z)
{
    x += 1;
    y *= 2;
    z -= 1;
}

int main()
{
    int x, y, z;
    cout << "x ==>";
    cin >> x;
    cout << "y ==>";
    cin >> y;
    cout << "z ==>";
    cin >> z;

    izmeni(x, y, z);

    cout << x << ", " << y << ", " << z << endl;

    return 0;
}