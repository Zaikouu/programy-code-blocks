#include <iostream>

using namespace std;

int main()
{
    int liczba1;
    do
    {
        cout<<"Podaj liczbe z przedzialu <10,20>: ";
        cin>>liczba1;
    }while(liczba1<10 || liczba1>20);
    cout<<"Prawidlowa liczba :)";
    return 0;
}
