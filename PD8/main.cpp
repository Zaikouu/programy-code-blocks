#include <iostream>
#include <ctime>
#include <cstdio>
using namespace std;

int main()
{
    int los=0,wprowadzona;
    srand(time(NULL));

    los=rand()%101;
    do
    {
        cout<<"Zgadnij wylosowana liczbe: ";
        cin>>wprowadzona;
        if(los>wprowadzona)
            cout<<"Za mala"<<endl;
        else if(los<wprowadzona)
            cout<<"Za duza"<<endl;
        else
            cout<<"To poprawna liczba!"<<endl;
    }while(wprowadzona!=los);
    cout<<"liczba to: "<<los;
    return 0;
}
