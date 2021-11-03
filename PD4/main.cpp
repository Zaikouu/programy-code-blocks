#include <iostream>

using namespace std;

int main()
{
    int liczba1;
    do
    {
        cout<<"Podaj liczbe wieksza od zera: ";
        cin>>liczba1;
    }while(liczba1<=0);
    cout<<"OK"<<endl;
    return 0;
}
