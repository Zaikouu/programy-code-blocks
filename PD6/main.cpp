#include <iostream>

using namespace std;

int main()
{
    int liczba1;
    int i;
    cout<<"Prosze podac liczbe: ";
    cin>>liczba1;
    for(i=0;liczba1>0;i++)
        liczba1/=10;
    if(i==0)
        i=1;
    cout<<"Ilosc cyfr: "<<i;
    return 0;
}
