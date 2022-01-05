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
    int nominal[9]={500,200,100,50,20,10,5,2,1};
    int ile;
    for(int i=0;i<9;++i)
    {
        ile=kwota/nominal[i];
        cout<<nominal[i]<<"\t"<<ile<<endl;
        kwota%=nominal[i];
    }

}
