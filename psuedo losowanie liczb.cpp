#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int liczba , strzal,prob = 0;

int main(){
	cout<<"Witaj uzytkowniku wybierz liczbe w zakresie od 1-100"<<endl;
	srand(time(NULL));
	liczba = rand()%100+1;
	
	while(strzal !=liczba){
		prob++;
		cout<<"zgadnij jaka liczba (to twoja "<<prob<<" proba)"<<endl;
		cin>>strzal;
		
		if(strzal==liczba)
		cout<<"WOW zgadles "<<"wygrywasz w "<<prob<<"probie"<<endl;
		else if(strzal<liczba)
		cout<<"za mala "<<endl;
		else if (strzal>liczba)
		cout<<"To za duzo"<<endl;
	}
	system("pause");
	return 0;
}

