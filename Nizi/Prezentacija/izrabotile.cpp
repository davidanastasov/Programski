#include <iostream>

using namespace std;

int main()
{
    string izrabotile[] = {"David Anastasov",
                           "Darko Vanevski",
                           "Damjan Kaloshev",
                           "Aleksandar Zafirovski",
                           "Enes Demirovikj"};

    cout << "Izrabotile:" << endl;
    cout << "------------" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << izrabotile[i] << endl;
    }

    return 0;
}