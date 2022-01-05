#include <iostream>
#include <cstring>
using namespace std;
int czypin(char []);
int main()
{
    char pin[10];
    cout<<"Podaj pin: ";
    cin.getline(pin,10);
    if(czypin(pin)==0)
    {
        cout<<"Ten pin jest niepoprawny";
        return 0;
    }
    cout<<"Ten pin jest poprawny";
    return 0;
}
int czypin(char pin[])
{
    int ile=strlen(pin);
    if(ile!=6)
        return 0;
    for(int i=0;i<5;++i)
    {
        if(pin[i]==pin[i+1])
            return 0;
        return 1;
    }
}
