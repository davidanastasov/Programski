#include <iostream>

using namespace std;

int main()
{
    int broevi[] = {3, 6, 14, 100, 89, 33, 124, 322};

    cout << "Broevite se: ";

    for (int i = 0; i < 8; i++)
    {
        cout << broevi[i] << " ";
    }

    return 0;
}