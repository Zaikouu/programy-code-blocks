#include <iostream>

using namespace std;
/*
Zad. 2
=====
WprowadŸ kwotê zarobionych pieniêdzy i policz jaki podatek nale¿y zap³aciæ od tej kwoty.
Za³o¿enie:
Do kwoty 60000.00 z³. p³acimy podatek 17%
Powy¿ej kwoty 60000 podatek wynosi 30%
*/

int main()
{
    float liczbapieniedzy;
    cout << "Wprowadz liczbe zarobionych pieniedzy: ";
    cin >> liczbapieniedzy;
    if (liczbapieniedzy<=6000.00)
        cout << "Podatek od tej kwoty wynosi: "<< liczbapieniedzy*0.17 << " zlotych";
    else
        cout << "Podatek od tej kwoty wynosi: "<< liczbapieniedzy*0.30 << " zlotych";
    return 0;
}
