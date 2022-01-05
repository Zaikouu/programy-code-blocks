#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int rozmiar=20;
    int tab1[rozmiar],i,suma=0,liczba1;
    srand(time(NULL));

    cout<<"Wartosci tablicy: ";
    for(i=0;i<=(rozmiar-1);i++)
    {
        tab1[i]=rand()%11;
        cout<<tab1[i]<<" ";
    }
    cout<<endl<<"Podaj liczbe z przedialu <0,10>: ";
    cin>>liczba1;
    cout<<endl;
    for(i=0;i<=(rozmiar-1);i++)
    {
        cout<<tab1[i]<<" ";
        if(tab1[i]==liczba1)
            suma++;
    }
    cout<<endl<<"Ilosc tych liczb: "<<suma;
    return 0;
}
