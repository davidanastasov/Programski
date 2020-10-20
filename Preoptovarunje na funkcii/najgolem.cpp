#include <iostream>

using namespace std;

template <typename T>
T pogolem(T a, T b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int najgolem_int = pogolem(pogolem(5, 3), 67);
    double najgolem_double = pogolem(pogolem(3.14, 5.26), 1.37);
    char najgolem_char = pogolem(pogolem('a', 'c'), 'b');
    string najgolem_string = pogolem(pogolem("David", "Andrej"), "Darko");

    cout << najgolem_int << endl;
    cout << najgolem_double << endl;
    cout << najgolem_char << endl;
    cout << najgolem_string << endl;

    return 0;
}