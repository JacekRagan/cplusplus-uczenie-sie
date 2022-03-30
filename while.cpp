#include <iostream>
using namespace std;

/*
int main(){
int a;
	while(true){
		a++;
		cout<<a<<endl;
		
	}
}
*/
int main(){
	char wybor;
	cout<<"Czy chcesz to pobrac? Y/N "<<endl;
	cin>>wybor;
	if (wybor=='y'){
		cout<<"instaluje rata"<<endl;
   }
	else{
		cout<<"Nie instaluje rata"<<endl;
	}
}