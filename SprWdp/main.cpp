#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int los=0,ile;
    srand(time(NULL));
    do
    {
        los=rand()%151;
        cout<<los<<endl;
        if(los%2==0)
        {
            ile++;

            cout<<"Liczba losow parzystych: "<<ile<<endl;
        }
    }while(ile!=200);
}
