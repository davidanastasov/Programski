#include <iostream>

using namespace std;

int main()
{
    int niza[10] = {5, 24, 13, 0, 1024, 43, 8, 128, 90, 32};

    // Pominuvame niz nizata od index 0 do index 9
    for (int i = 0; i < 10; i++)
    {
        // Pominuvame niz nizata povtorno, ovoj pat od index i+1 do 9
        for (int j = i + 1; j < 10; j++)
        {
            // Proveruvame dali elementot e pogolem
            if (niza[i] > niza[j])
            {
                // Gi zamenuvame elementite
                int x = niza[i];
                niza[i] = niza[j];
                niza[j] = x;
            }
        }
    }

    // Ja pecatime podredenata niza
    for (int i = 0; i < 10; i++)
    {
        cout << niza[i] << " ";
    }
}
