// 9. Да се напише програма во која се внесуваат n броеви.
// Да се пресмета и испечати колку од броевите се наоѓаат во петтата стотка
// и истовремено да бидат деливи со 6.
// Пресметување број на елементите на низата да се резлизира со функција.

#include <iostream>

using namespace std;

void popolniNiza(int niza[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Broj " << i + 1 << " ==>";
        cin >> niza[i];
    }
}

void pecati(int niza[], int n)
{
    cout << "Broevi vo pettata stotka i delivi so 6: ";
    for (int i = 0; i < n; i++)
    {
        int broj = niza[i];
        if (broj >= 500 && broj < 600)
        {
            if (broj % 6 == 0)
                cout << broj << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Kolku broevi ke vnesete ==>";
    cin >> n;

    int niza[n];
    popolniNiza(niza, n);

    pecati(niza, n);

    return 0;
}