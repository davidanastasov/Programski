#include <iostream>

using namespace std;

int zbir(int n)
{
    if (n <= 1)
        return 1;
    return n + zbir(n - 1);
}

int main()
{
    int n;
    cout << "Od 1 do ==>";
    cin >> n;

    cout << "Zbirot na broevite od 1 do " << n << " e " << zbir(n) << endl;

    return 0;
}