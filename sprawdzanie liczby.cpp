#include <iostream> //biblioteka wyjscia i wejscia
using namespace std;
/*
w srodku komentarz
*/

int main(){
	int a;
	cout<<"Podaj liczbe"<<endl;
	cin>>a;
	if (a < 0){
		cout<<"Jest to liczba ujemna "<<endl;
		cout<<a<<endl;
	}
	else if(a == 0){
		cout<<"Jest to liczba rowna zeru"<<endl;
		cout<<a<<endl;
	}
	else{
		cout<<"Jest to liczba dodatnia"<<endl;
		cout<<a<<endl;
	}
}