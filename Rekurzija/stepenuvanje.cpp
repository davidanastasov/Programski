#include <iostream>

using namespace std;

float stepenuvaj(float osnova, float stepen)
{
    if (stepen <= 1)
        return osnova;
    return osnova * stepenuvaj(osnova, stepen - 1);
}

int main()
{
    float osnova, stepen;
    cout << "Osnova ==>";
    cin >> osnova;
    cout << "Stepen ==>";
    cin >> stepen;

    cout << osnova << " ^ " << stepen << " = " << stepenuvaj(osnova, stepen) << endl;

    return 0;
}