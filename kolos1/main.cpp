#include <iostream>

using namespace std;

int main()
{
    int srednia=0;
    int zmienna1=0;
    cout<<"Liczby parzyste z przedzialu <10,20>: ";
    for(int i=10;i<=20;++i)
    {
        if((i%2)==0)
        {
            srednia+=i;
            cout<<i<<" ";
            zmienna1++;
        }
    }
    cout<<endl;
    cout<<"Suma liczb: "<<srednia<<endl;
    cout<<"Srednia tych liczb: "<<float(srednia)/zmienna1;
    return 0;
}
