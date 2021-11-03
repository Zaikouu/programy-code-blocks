#include <iostream>

using namespace std;
/*
Zad. 3
============
Deklarujemy dwie zmienne typu int i przypisujemy im wartoœci.
Program pyta jak¹ operacjê chcemy wykonaæ na tych liczbach.
Do wyboru mamy: + - * /
Wczytujemy operator.
Program sprawdza jaki operator zosta³ podany i wypisuje wynik operacji.
W przypadku podania znaku innego ni¿ prawid³owy operator wyœwietlany jest komunikat „Nieprawid³owy operator”
*/


int main()
{
    int liczba1=20;
    int liczba2=5;
    char operator1;
    cout<<"Wybierz jeden z dostepnych operatorow: + - * /" << endl;
    cout<<"Wprowadz operator: ";
    cin >> operator1;
    switch(operator1)
    {
        case '+':
            cout<<"Operacja dodawania: "<<liczba1+liczba2;
            break;
        case '-':
            cout<<"Operacja odejmowania: "<<liczba1-liczba2;
            break;
        case '*':
            cout<<"Operacja mnozenia: "<<liczba1*liczba2;
            break;
        case '/':
            cout<<"Operacja dzielenia: "<<liczba1/liczba2;
            break;
        default:
            cout<<"Niperawidlowy operator";
    }
    return 0;
}
