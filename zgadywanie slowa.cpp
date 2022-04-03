#include <iostream>
using namespace std;

string haslo;
string slowo = "bomba";
int proba = 5;
int dlugosc = slowo.length();
bool gra = true;
int main(){
cout<<"Twoje slowo ma "<<dlugosc<<" znakow"<<" i zaczyna sie na litere "<<slowo[0]<<endl;cout<<"Twoj strzal to..."<<endl;
while(proba!=0){
	cin>>haslo;
	if (haslo==slowo){
		cout<<"Wygrales"<<endl;
		return 0;
	}
	else if(haslo!=slowo){
		proba -= 1;
		cout<<"Zle zostaly ci jeszcze "<<proba<<" proby"<<endl;
	}
}
cout<<"przegrales"<<endl;
return 0;
}
