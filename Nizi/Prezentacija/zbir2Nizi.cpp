#include <iostream>

using namespace std;

int main()
{
    int A[] = {16, 52, 4, 30, 27, 20, 60, 9, 9, 58};
    int B[] = {61, 46, 51, 35, 71, 4, 20, 30, 22, 46};
    int C[10];

    // Presmetuvame zbir na A[i] + B[i]
    for (int i = 0; i < 10; i++)
        C[i] = A[i] + B[i];

    // Gi pecatime elementite od nizata C
    for (int i = 0; i < 10; i++)
        cout << C[i] << " ";

    return 0;
}