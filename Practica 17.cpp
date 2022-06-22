#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "spanish");
	string X;
	string Y;
	cout<<"Ingrese dos cadenas de texto para juntarlas. \n"<<"Ingrese la primer cadena \n";
	cin>>X;
	cout<<"Ingrese la segunda cadena \n";
	cin>>Y;
	cout<<X<<" "<<Y<<"\n";
system ("PAUSE");
return 0;
}


