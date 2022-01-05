#include<iostream>

using namespace std;

int main(){
    cout<<"podaj dlugosc tablicy"<<endl;
    int a;
    cin>>a;
    int tablica[a];
    for(int i = 0;i<a;i++){
        cin>>tablica[i];
    }
    int co;
    int max=0;
    for(int i = 0;i<a;i++){
    	int localmax = 0;
    	int localco;
    	for(int x = 0;x<a;x++){
    		if(tablica[i] == tablica[x]){
    			localmax++;
    			localco = tablica[i];
			}
		}
		if(localmax > max){
			max = localmax;
			co = localco;
		}
	}
	cout<<"liczba "<<co<<" powtorzyla sie "<<max<<" razy";
}
