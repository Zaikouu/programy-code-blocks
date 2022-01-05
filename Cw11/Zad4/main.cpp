#include <iostream>
#include <cstring>
using namespace std;
void nominal(int);
int main()
{
    int kwota;
    cout<<"Podaj kwote do wyp³aty: ";
    cin>>kwota;
    nominal(kwota);
    return 0;
}
void nominal(int kwota)
{
    int nominaly[9]={500,200,100,50,20,10,5,2,1};
    int i=0, ile;
    cout<<"Nominaly potrzebne do wyplacenia kwoty: "<<kwota<<endl;
    while(kwota>=0 && i<9)
    {
        ile=0;
        while(kwota>=nominaly[i])
        {
            ile++;
            kwota-=nominaly[i];
        }
        cout<<nominaly[i]<<"-"<<ile<<endl;
        i++;
    }
}
