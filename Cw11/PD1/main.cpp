#include <iostream>
#include <cstring>
using namespace std;
void zamiana(char [],char,char);
int main()
{
    char napis[50], znak1, znak2;
    cout<<"Wprowadz napis: ";
    cin.getline(napis,50);
    cout<<"Podaj znak do zmiany: ";
    cin>>znak1;
    cout<<"Podaj znak po zmianie: ";
    cin>>znak2;
    zamiana(napis,znak1,znak2);
    return 0;
}
void zamiana(char napis[],char znak1,char znak2)
{
    int ile;
    ile=strlen(napis);
    for(int i=0;i<ile;++i)
    {
        if(napis[i]==znak1)
            napis[i]=znak2;
        cout<<napis[i];
    }
}
