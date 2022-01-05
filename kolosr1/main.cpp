#include <iostream>

using namespace std;

int main()
{
    const int roz=15;
    int tab1[roz]={10,0,1,3,2,5,3,10,8,9,2,4,20,9,12};
    int pom[21]={0};
    int epowt=0;
    cout<<"Elementy Tablicy: ";
    for(int i=0;i<roz;i++)
    {
        cout<<tab1[i]<<" ";
        tab1[i]=pom[tab1[i]]++;
    }
    cout<<endl;
    int powt=tab1[0];
    for(int i=0;i<21;++i)
    {
        if(pom[i]>powt)
        {
            powt=pom[i];
            epowt=i;
        }
    }
    cout<<endl<<"Element z najwieksza iloscia powtorzen: "<<epowt;
    cout<<endl<<"Ilosc powtorzen tego elementu: "<<powt;
    return 0;
}
