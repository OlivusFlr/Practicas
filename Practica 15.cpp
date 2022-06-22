#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "spanish");
	int Do, Dr, R, T;
	cout<<"Ingrese el dividendo, use numeros enteros \n";
	cin>>Do;
	cout<<"Ingrese el divisor, use numeros enteros \n";
	cin>>Dr;
	R=Do%Dr;
	T=Do/Dr;
	cout<<Do<<" cabe "<<T<<" veces en "<<Dr<<"\n";
	if(R%2==0){
		cout<<"El residuo de la división de "<<Do<<"/"<<Dr<<" es: "<<R<<" y es par \n";
	}
	else{
		cout<<"El residuo de la división de "<<Do<<"/"<<Dr<<" es: "<<R<<" y es impar \n";
	}
	system ("PAUSE");
	return 0;
}

