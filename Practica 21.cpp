#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
int main(){
	setlocale (LC_ALL, "spanish");
	int X, Y;
	cout<<"\t"<<"Cuenta \n";
	cout<<"Ingrese dos numeros enteros distintos \n"<<"Ingrese el primer numero \n";
	cin>>X;
	cout<<"Ingrese el segundo numero \n";
	cin>>Y;
	while(X==Y){
		cout<<"Ingresó valores iguales, porfavor ingrese valores distintos \n";
		cout<<"Ingrese dos numeros enteros distintos \n"<<"Ingrese el primer numero \n";
		cin>>X;
		cout<<"Ingrese el segundo numero \n";
		cin>>Y;
	}
	if(X>Y){
		cout<<"Inicio de la cuenta ascendente \n";
		while(X>=Y){
			cout<<"\t"<<Y<<"\n";
			Y=Y+1;
		}
	}
	else if(Y>X){
		cout<<"Inicio de la cuenta descendente \n";
		while(Y>=X){
			cout<<"\t"<<Y<<"\n";
			Y=Y-1;
		}
	}
system ("PAUSE");
return 0;
}


