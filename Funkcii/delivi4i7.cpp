#include <iostream>

using namespace std;

void pecatiDelivi(int n)
{
    cout << "Broevite delivi so 4 i 9 od 1 do " << n << " se: ";

    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 0 && i % 9 == 0)
            cout << i << " ";
    }

    cout << endl;
}

int main()
{
    int n;
    cout << "Broevi od 1 do ==>";
    cin >> n;
    pecatiDelivi(n);
    return 0;
}