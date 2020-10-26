#include <iostream>

using namespace std;

int main()
{
    int N[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int zbir = 0;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
            zbir += N[i];
    }

    cout << "Zbirot na elementite na neparni pozicii e: " << zbir << endl;
    return 0;
}
