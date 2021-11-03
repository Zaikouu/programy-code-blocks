#include <iostream>

using namespace std;

int main()
{
    int liczba1;
    cout << "Podaj dowolna liczbe calkowita: ";
    cin >> liczba1;
    if (liczba1%2==0)
        cout << "Ta liczba jest parzysta";
    else
        cout << "Ta liczba nie jest parzysta";
    return 0;
}
