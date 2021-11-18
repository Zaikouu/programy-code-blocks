#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int los1=0,los2=0,ilerazy,wynik;
    srand(time(NULL));
    los1=rand()%11;
    los2=rand()%11;
    cout<<"Pierwsza wylosowana: "<<los1<<endl;
    cout<<"Druga wylosowana: "<<los2<<endl;
    do
    {
        cout<<"Podaj iloczyn dwoch wylosowanych liczb: ";
        cin>>wynik;
        if(los1*los2!=wynik)
            ilerazy++;
    }while(los1*los2!=wynik && ilerazy!=3);

    return 0;
}
