#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

 float x,y;
 int wybor;
 
 int main(){
 	while (true){
 	cout<<"Podaj pierwsza liczbe: "<<endl;
 	cin>>x;
 	cout<<"Podaj druga liczbe: "<<endl;
 	cin>>y;
 	
 	cout<<endl;
 	cout<<"menu glowne"<<endl;
 	cout<<"1.dodawanie"<<endl;
 	cout<<"2.odejmowanie"<<endl;
 	cout<<"3.mnozenie"<<endl;
 	cout<<"4.dzielenie"<<endl;
 	cout<<"5.Wyjscie"<<endl;
 	cout<<endl;
 	cout<<"wybierz numer: ";
 	cin>>wybor; 
 	
 	switch(wybor){
 		case 1:{
 			cout<<"Suma"<<x+y<<endl;
 			break;
		 }
		 case 2:{
		 	cout<<"Odejmowanie "<<x-y<<endl;
			break;
		 }
		 case 3:{
		 	cout<<"mnozenie "<<x*y<<endl;
			break;
		 }
		 case 4:{
		 	if (y==0){
		 		cout<<"Nie dzielimy przez zero"<<endl;
			 }
			 else{
			 	cout<<"dzielenie "<<x/y<<endl;
				break;	
			 }
		 }
		 case 5:{
		 	exit(0);
			break;
		 }
		 default:{
		 	cout<<"Nie ma takiej opcji w menu lol"<<endl;
			break;
		 }
		 getchar();getchar();
		 system("cls");	
	 }
}
 	return 0;
 }